// fichero 15330 -- macros y constantes -- MODIFICADO
#define LIMITE_15330 15530
#define FACTOR_15330 2

int aplicar_limite15330(int valor) {
    if (valor > LIMITE_15330) return LIMITE_15330;
    return valor * FACTOR_15330;
}
