// fichero 5646 -- macros y constantes
#define LIMITE_5646 5746
#define FACTOR_5646 2

int aplicar_limite5646(int valor) {
    if (valor > LIMITE_5646) return LIMITE_5646;
    return valor * FACTOR_5646;
}
