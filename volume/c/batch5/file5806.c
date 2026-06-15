// fichero 5806 -- macros y constantes -- MODIFICADO
#define LIMITE_5806 6006
#define FACTOR_5806 3

int aplicar_limite5806(int valor) {
    if (valor > LIMITE_5806) return LIMITE_5806;
    return valor * FACTOR_5806;
}
