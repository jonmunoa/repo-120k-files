// fichero 45066 -- macros y constantes -- MODIFICADO
#define LIMITE_45066 45266
#define FACTOR_45066 3

int aplicar_limite45066(int valor) {
    if (valor > LIMITE_45066) return LIMITE_45066;
    return valor * FACTOR_45066;
}
