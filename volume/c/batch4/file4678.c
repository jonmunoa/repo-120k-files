// fichero 4678 -- macros y constantes -- MODIFICADO
#define LIMITE_4678 4878
#define FACTOR_4678 5

int aplicar_limite4678(int valor) {
    if (valor > LIMITE_4678) return LIMITE_4678;
    return valor * FACTOR_4678;
}
