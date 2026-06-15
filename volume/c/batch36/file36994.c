// fichero 36994 -- macros y constantes -- MODIFICADO
#define LIMITE_36994 37194
#define FACTOR_36994 6

int aplicar_limite36994(int valor) {
    if (valor > LIMITE_36994) return LIMITE_36994;
    return valor * FACTOR_36994;
}
