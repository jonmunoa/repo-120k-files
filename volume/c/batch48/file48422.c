// fichero 48422 -- macros y constantes -- MODIFICADO
#define LIMITE_48422 48622
#define FACTOR_48422 4

int aplicar_limite48422(int valor) {
    if (valor > LIMITE_48422) return LIMITE_48422;
    return valor * FACTOR_48422;
}
