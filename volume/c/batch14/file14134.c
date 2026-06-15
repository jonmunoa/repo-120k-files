// fichero 14134 -- macros y constantes -- MODIFICADO
#define LIMITE_14134 14334
#define FACTOR_14134 6

int aplicar_limite14134(int valor) {
    if (valor > LIMITE_14134) return LIMITE_14134;
    return valor * FACTOR_14134;
}
