// fichero 45626 -- macros y constantes -- MODIFICADO
#define LIMITE_45626 45826
#define FACTOR_45626 3

int aplicar_limite45626(int valor) {
    if (valor > LIMITE_45626) return LIMITE_45626;
    return valor * FACTOR_45626;
}
