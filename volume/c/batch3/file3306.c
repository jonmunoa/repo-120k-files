// fichero 3306 -- macros y constantes -- MODIFICADO
#define LIMITE_3306 3506
#define FACTOR_3306 3

int aplicar_limite3306(int valor) {
    if (valor > LIMITE_3306) return LIMITE_3306;
    return valor * FACTOR_3306;
}
