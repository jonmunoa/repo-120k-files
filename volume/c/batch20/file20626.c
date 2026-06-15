// fichero 20626 -- macros y constantes -- MODIFICADO
#define LIMITE_20626 20826
#define FACTOR_20626 3

int aplicar_limite20626(int valor) {
    if (valor > LIMITE_20626) return LIMITE_20626;
    return valor * FACTOR_20626;
}
