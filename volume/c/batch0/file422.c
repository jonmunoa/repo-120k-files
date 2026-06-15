// fichero 422 -- macros y constantes -- MODIFICADO
#define LIMITE_422 622
#define FACTOR_422 4

int aplicar_limite422(int valor) {
    if (valor > LIMITE_422) return LIMITE_422;
    return valor * FACTOR_422;
}
