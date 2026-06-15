// fichero 42626 -- macros y constantes -- MODIFICADO
#define LIMITE_42626 42826
#define FACTOR_42626 3

int aplicar_limite42626(int valor) {
    if (valor > LIMITE_42626) return LIMITE_42626;
    return valor * FACTOR_42626;
}
