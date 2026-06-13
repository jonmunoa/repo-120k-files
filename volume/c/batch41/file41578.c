// fichero 41578 -- macros y constantes
#define LIMITE_41578 41678
#define FACTOR_41578 4

int aplicar_limite41578(int valor) {
    if (valor > LIMITE_41578) return LIMITE_41578;
    return valor * FACTOR_41578;
}
