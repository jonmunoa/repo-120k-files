// fichero 3306 -- macros y constantes
#define LIMITE_3306 3406
#define FACTOR_3306 2

int aplicar_limite3306(int valor) {
    if (valor > LIMITE_3306) return LIMITE_3306;
    return valor * FACTOR_3306;
}
