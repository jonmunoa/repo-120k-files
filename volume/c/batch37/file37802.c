// fichero 37802 -- macros y constantes
#define LIMITE_37802 37902
#define FACTOR_37802 3

int aplicar_limite37802(int valor) {
    if (valor > LIMITE_37802) return LIMITE_37802;
    return valor * FACTOR_37802;
}
