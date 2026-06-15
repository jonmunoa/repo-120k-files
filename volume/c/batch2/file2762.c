// fichero 2762 -- macros y constantes -- MODIFICADO
#define LIMITE_2762 2962
#define FACTOR_2762 4

int aplicar_limite2762(int valor) {
    if (valor > LIMITE_2762) return LIMITE_2762;
    return valor * FACTOR_2762;
}
