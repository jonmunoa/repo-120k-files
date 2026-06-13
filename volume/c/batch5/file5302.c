// fichero 5302 -- macros y constantes
#define LIMITE_5302 5402
#define FACTOR_5302 3

int aplicar_limite5302(int valor) {
    if (valor > LIMITE_5302) return LIMITE_5302;
    return valor * FACTOR_5302;
}
