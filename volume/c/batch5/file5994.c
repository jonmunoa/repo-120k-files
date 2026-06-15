// fichero 5994 -- macros y constantes -- MODIFICADO
#define LIMITE_5994 6194
#define FACTOR_5994 6

int aplicar_limite5994(int valor) {
    if (valor > LIMITE_5994) return LIMITE_5994;
    return valor * FACTOR_5994;
}
