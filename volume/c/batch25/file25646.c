// fichero 25646 -- macros y constantes
#define LIMITE_25646 25746
#define FACTOR_25646 2

int aplicar_limite25646(int valor) {
    if (valor > LIMITE_25646) return LIMITE_25646;
    return valor * FACTOR_25646;
}
