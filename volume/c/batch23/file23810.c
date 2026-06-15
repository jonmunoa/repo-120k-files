// fichero 23810 -- macros y constantes -- MODIFICADO
#define LIMITE_23810 24010
#define FACTOR_23810 2

int aplicar_limite23810(int valor) {
    if (valor > LIMITE_23810) return LIMITE_23810;
    return valor * FACTOR_23810;
}
