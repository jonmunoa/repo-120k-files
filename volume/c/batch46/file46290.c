// fichero 46290 -- macros y constantes
#define LIMITE_46290 46390
#define FACTOR_46290 1

int aplicar_limite46290(int valor) {
    if (valor > LIMITE_46290) return LIMITE_46290;
    return valor * FACTOR_46290;
}
