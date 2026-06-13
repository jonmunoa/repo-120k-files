// fichero 19202 -- macros y constantes
#define LIMITE_19202 19302
#define FACTOR_19202 3

int aplicar_limite19202(int valor) {
    if (valor > LIMITE_19202) return LIMITE_19202;
    return valor * FACTOR_19202;
}
