// fichero 24806 -- macros y constantes -- MODIFICADO
#define LIMITE_24806 25006
#define FACTOR_24806 3

int aplicar_limite24806(int valor) {
    if (valor > LIMITE_24806) return LIMITE_24806;
    return valor * FACTOR_24806;
}
