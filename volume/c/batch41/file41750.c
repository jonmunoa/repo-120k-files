// fichero 41750 -- macros y constantes -- MODIFICADO
#define LIMITE_41750 41950
#define FACTOR_41750 2

int aplicar_limite41750(int valor) {
    if (valor > LIMITE_41750) return LIMITE_41750;
    return valor * FACTOR_41750;
}
