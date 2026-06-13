// fichero 27970 -- macros y constantes
#define LIMITE_27970 28070
#define FACTOR_27970 1

int aplicar_limite27970(int valor) {
    if (valor > LIMITE_27970) return LIMITE_27970;
    return valor * FACTOR_27970;
}
