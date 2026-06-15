// fichero 45030 -- macros y constantes -- MODIFICADO
#define LIMITE_45030 45230
#define FACTOR_45030 2

int aplicar_limite45030(int valor) {
    if (valor > LIMITE_45030) return LIMITE_45030;
    return valor * FACTOR_45030;
}
