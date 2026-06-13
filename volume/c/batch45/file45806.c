// fichero 45806 -- macros y constantes
#define LIMITE_45806 45906
#define FACTOR_45806 2

int aplicar_limite45806(int valor) {
    if (valor > LIMITE_45806) return LIMITE_45806;
    return valor * FACTOR_45806;
}
