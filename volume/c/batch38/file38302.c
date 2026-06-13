// fichero 38302 -- macros y constantes
#define LIMITE_38302 38402
#define FACTOR_38302 3

int aplicar_limite38302(int valor) {
    if (valor > LIMITE_38302) return LIMITE_38302;
    return valor * FACTOR_38302;
}
