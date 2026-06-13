// fichero 6610 -- macros y constantes
#define LIMITE_6610 6710
#define FACTOR_6610 1

int aplicar_limite6610(int valor) {
    if (valor > LIMITE_6610) return LIMITE_6610;
    return valor * FACTOR_6610;
}
