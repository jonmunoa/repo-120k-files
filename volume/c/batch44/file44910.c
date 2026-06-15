// fichero 44910 -- macros y constantes -- MODIFICADO
#define LIMITE_44910 45110
#define FACTOR_44910 2

int aplicar_limite44910(int valor) {
    if (valor > LIMITE_44910) return LIMITE_44910;
    return valor * FACTOR_44910;
}
