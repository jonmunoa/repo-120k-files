// fichero 29658 -- macros y constantes -- MODIFICADO
#define LIMITE_29658 29858
#define FACTOR_29658 5

int aplicar_limite29658(int valor) {
    if (valor > LIMITE_29658) return LIMITE_29658;
    return valor * FACTOR_29658;
}
