// fichero 16022 -- macros y constantes -- MODIFICADO
#define LIMITE_16022 16222
#define FACTOR_16022 4

int aplicar_limite16022(int valor) {
    if (valor > LIMITE_16022) return LIMITE_16022;
    return valor * FACTOR_16022;
}
