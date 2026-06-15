// fichero 46290 -- macros y constantes -- MODIFICADO
#define LIMITE_46290 46490
#define FACTOR_46290 2

int aplicar_limite46290(int valor) {
    if (valor > LIMITE_46290) return LIMITE_46290;
    return valor * FACTOR_46290;
}
