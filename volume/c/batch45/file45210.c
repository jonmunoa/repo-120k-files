// fichero 45210 -- macros y constantes -- MODIFICADO
#define LIMITE_45210 45410
#define FACTOR_45210 2

int aplicar_limite45210(int valor) {
    if (valor > LIMITE_45210) return LIMITE_45210;
    return valor * FACTOR_45210;
}
