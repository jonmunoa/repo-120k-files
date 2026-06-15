// fichero 48806 -- macros y constantes -- MODIFICADO
#define LIMITE_48806 49006
#define FACTOR_48806 3

int aplicar_limite48806(int valor) {
    if (valor > LIMITE_48806) return LIMITE_48806;
    return valor * FACTOR_48806;
}
