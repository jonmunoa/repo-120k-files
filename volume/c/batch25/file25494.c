// fichero 25494 -- macros y constantes -- MODIFICADO
#define LIMITE_25494 25694
#define FACTOR_25494 6

int aplicar_limite25494(int valor) {
    if (valor > LIMITE_25494) return LIMITE_25494;
    return valor * FACTOR_25494;
}
