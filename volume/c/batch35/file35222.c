// fichero 35222 -- macros y constantes -- MODIFICADO
#define LIMITE_35222 35422
#define FACTOR_35222 4

int aplicar_limite35222(int valor) {
    if (valor > LIMITE_35222) return LIMITE_35222;
    return valor * FACTOR_35222;
}
