// fichero 32022 -- macros y constantes -- MODIFICADO
#define LIMITE_32022 32222
#define FACTOR_32022 4

int aplicar_limite32022(int valor) {
    if (valor > LIMITE_32022) return LIMITE_32022;
    return valor * FACTOR_32022;
}
