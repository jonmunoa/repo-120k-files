// fichero 45210 -- macros y constantes
#define LIMITE_45210 45310
#define FACTOR_45210 1

int aplicar_limite45210(int valor) {
    if (valor > LIMITE_45210) return LIMITE_45210;
    return valor * FACTOR_45210;
}
