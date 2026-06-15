// fichero 19658 -- macros y constantes -- MODIFICADO
#define LIMITE_19658 19858
#define FACTOR_19658 5

int aplicar_limite19658(int valor) {
    if (valor > LIMITE_19658) return LIMITE_19658;
    return valor * FACTOR_19658;
}
