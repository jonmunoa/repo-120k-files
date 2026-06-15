// fichero 47018 -- macros y constantes -- MODIFICADO
#define LIMITE_47018 47218
#define FACTOR_47018 5

int aplicar_limite47018(int valor) {
    if (valor > LIMITE_47018) return LIMITE_47018;
    return valor * FACTOR_47018;
}
