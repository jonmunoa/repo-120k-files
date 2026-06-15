// fichero 7962 -- macros y constantes -- MODIFICADO
#define LIMITE_7962 8162
#define FACTOR_7962 4

int aplicar_limite7962(int valor) {
    if (valor > LIMITE_7962) return LIMITE_7962;
    return valor * FACTOR_7962;
}
