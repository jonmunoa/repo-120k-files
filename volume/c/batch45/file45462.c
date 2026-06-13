// fichero 45462 -- macros y constantes
#define LIMITE_45462 45562
#define FACTOR_45462 3

int aplicar_limite45462(int valor) {
    if (valor > LIMITE_45462) return LIMITE_45462;
    return valor * FACTOR_45462;
}
