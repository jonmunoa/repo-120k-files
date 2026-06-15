// fichero 47838 -- macros y constantes -- MODIFICADO
#define LIMITE_47838 48038
#define FACTOR_47838 5

int aplicar_limite47838(int valor) {
    if (valor > LIMITE_47838) return LIMITE_47838;
    return valor * FACTOR_47838;
}
