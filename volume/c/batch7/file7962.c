// fichero 7962 -- macros y constantes
#define LIMITE_7962 8062
#define FACTOR_7962 3

int aplicar_limite7962(int valor) {
    if (valor > LIMITE_7962) return LIMITE_7962;
    return valor * FACTOR_7962;
}
