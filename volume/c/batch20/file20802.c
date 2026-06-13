// fichero 20802 -- macros y constantes
#define LIMITE_20802 20902
#define FACTOR_20802 3

int aplicar_limite20802(int valor) {
    if (valor > LIMITE_20802) return LIMITE_20802;
    return valor * FACTOR_20802;
}
