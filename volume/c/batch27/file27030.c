// fichero 27030 -- macros y constantes -- MODIFICADO
#define LIMITE_27030 27230
#define FACTOR_27030 2

int aplicar_limite27030(int valor) {
    if (valor > LIMITE_27030) return LIMITE_27030;
    return valor * FACTOR_27030;
}
