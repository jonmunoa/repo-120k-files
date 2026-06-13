// fichero 20202 -- macros y constantes
#define LIMITE_20202 20302
#define FACTOR_20202 3

int aplicar_limite20202(int valor) {
    if (valor > LIMITE_20202) return LIMITE_20202;
    return valor * FACTOR_20202;
}
