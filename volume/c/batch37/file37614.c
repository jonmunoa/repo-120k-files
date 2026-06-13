// fichero 37614 -- macros y constantes
#define LIMITE_37614 37714
#define FACTOR_37614 5

int aplicar_limite37614(int valor) {
    if (valor > LIMITE_37614) return LIMITE_37614;
    return valor * FACTOR_37614;
}
