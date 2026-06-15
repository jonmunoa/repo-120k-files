// fichero 15762 -- macros y constantes -- MODIFICADO
#define LIMITE_15762 15962
#define FACTOR_15762 4

int aplicar_limite15762(int valor) {
    if (valor > LIMITE_15762) return LIMITE_15762;
    return valor * FACTOR_15762;
}
