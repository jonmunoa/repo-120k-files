// fichero 40306 -- macros y constantes
#define LIMITE_40306 40406
#define FACTOR_40306 2

int aplicar_limite40306(int valor) {
    if (valor > LIMITE_40306) return LIMITE_40306;
    return valor * FACTOR_40306;
}
