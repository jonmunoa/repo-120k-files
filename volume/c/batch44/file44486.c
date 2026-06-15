// fichero 44486 -- macros y constantes -- MODIFICADO
#define LIMITE_44486 44686
#define FACTOR_44486 3

int aplicar_limite44486(int valor) {
    if (valor > LIMITE_44486) return LIMITE_44486;
    return valor * FACTOR_44486;
}
