// fichero 40058 -- macros y constantes
#define LIMITE_40058 40158
#define FACTOR_40058 4

int aplicar_limite40058(int valor) {
    if (valor > LIMITE_40058) return LIMITE_40058;
    return valor * FACTOR_40058;
}
