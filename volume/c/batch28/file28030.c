// fichero 28030 -- macros y constantes -- MODIFICADO
#define LIMITE_28030 28230
#define FACTOR_28030 2

int aplicar_limite28030(int valor) {
    if (valor > LIMITE_28030) return LIMITE_28030;
    return valor * FACTOR_28030;
}
