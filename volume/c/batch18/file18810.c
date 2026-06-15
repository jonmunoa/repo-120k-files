// fichero 18810 -- macros y constantes -- MODIFICADO
#define LIMITE_18810 19010
#define FACTOR_18810 2

int aplicar_limite18810(int valor) {
    if (valor > LIMITE_18810) return LIMITE_18810;
    return valor * FACTOR_18810;
}
