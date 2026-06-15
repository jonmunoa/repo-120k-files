// fichero 44626 -- macros y constantes -- MODIFICADO
#define LIMITE_44626 44826
#define FACTOR_44626 3

int aplicar_limite44626(int valor) {
    if (valor > LIMITE_44626) return LIMITE_44626;
    return valor * FACTOR_44626;
}
