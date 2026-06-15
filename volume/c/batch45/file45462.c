// fichero 45462 -- macros y constantes -- MODIFICADO
#define LIMITE_45462 45662
#define FACTOR_45462 4

int aplicar_limite45462(int valor) {
    if (valor > LIMITE_45462) return LIMITE_45462;
    return valor * FACTOR_45462;
}
