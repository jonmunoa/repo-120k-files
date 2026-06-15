// fichero 47134 -- macros y constantes -- MODIFICADO
#define LIMITE_47134 47334
#define FACTOR_47134 6

int aplicar_limite47134(int valor) {
    if (valor > LIMITE_47134) return LIMITE_47134;
    return valor * FACTOR_47134;
}
