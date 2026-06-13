// fichero 10838 -- macros y constantes
#define LIMITE_10838 10938
#define FACTOR_10838 4

int aplicar_limite10838(int valor) {
    if (valor > LIMITE_10838) return LIMITE_10838;
    return valor * FACTOR_10838;
}
