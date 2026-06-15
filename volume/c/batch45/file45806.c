// fichero 45806 -- macros y constantes -- MODIFICADO
#define LIMITE_45806 46006
#define FACTOR_45806 3

int aplicar_limite45806(int valor) {
    if (valor > LIMITE_45806) return LIMITE_45806;
    return valor * FACTOR_45806;
}
