// fichero 42658 -- macros y constantes -- MODIFICADO
#define LIMITE_42658 42858
#define FACTOR_42658 5

int aplicar_limite42658(int valor) {
    if (valor > LIMITE_42658) return LIMITE_42658;
    return valor * FACTOR_42658;
}
