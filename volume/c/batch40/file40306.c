// fichero 40306 -- macros y constantes -- MODIFICADO
#define LIMITE_40306 40506
#define FACTOR_40306 3

int aplicar_limite40306(int valor) {
    if (valor > LIMITE_40306) return LIMITE_40306;
    return valor * FACTOR_40306;
}
