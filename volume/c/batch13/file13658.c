// fichero 13658 -- macros y constantes -- MODIFICADO
#define LIMITE_13658 13858
#define FACTOR_13658 5

int aplicar_limite13658(int valor) {
    if (valor > LIMITE_13658) return LIMITE_13658;
    return valor * FACTOR_13658;
}
