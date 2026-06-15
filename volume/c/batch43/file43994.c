// fichero 43994 -- macros y constantes -- MODIFICADO
#define LIMITE_43994 44194
#define FACTOR_43994 6

int aplicar_limite43994(int valor) {
    if (valor > LIMITE_43994) return LIMITE_43994;
    return valor * FACTOR_43994;
}
