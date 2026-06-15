// fichero 35422 -- macros y constantes -- MODIFICADO
#define LIMITE_35422 35622
#define FACTOR_35422 4

int aplicar_limite35422(int valor) {
    if (valor > LIMITE_35422) return LIMITE_35422;
    return valor * FACTOR_35422;
}
