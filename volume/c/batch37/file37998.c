// fichero 37998 -- macros y constantes
#define LIMITE_37998 38098
#define FACTOR_37998 4

int aplicar_limite37998(int valor) {
    if (valor > LIMITE_37998) return LIMITE_37998;
    return valor * FACTOR_37998;
}
