// fichero 20530 -- macros y constantes -- MODIFICADO
#define LIMITE_20530 20730
#define FACTOR_20530 2

int aplicar_limite20530(int valor) {
    if (valor > LIMITE_20530) return LIMITE_20530;
    return valor * FACTOR_20530;
}
