// fichero 35302 -- macros y constantes
#define LIMITE_35302 35402
#define FACTOR_35302 3

int aplicar_limite35302(int valor) {
    if (valor > LIMITE_35302) return LIMITE_35302;
    return valor * FACTOR_35302;
}
