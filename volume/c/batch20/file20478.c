// fichero 20478 -- macros y constantes
#define LIMITE_20478 20578
#define FACTOR_20478 4

int aplicar_limite20478(int valor) {
    if (valor > LIMITE_20478) return LIMITE_20478;
    return valor * FACTOR_20478;
}
