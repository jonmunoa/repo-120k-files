// fichero 12330 -- macros y constantes -- MODIFICADO
#define LIMITE_12330 12530
#define FACTOR_12330 2

int aplicar_limite12330(int valor) {
    if (valor > LIMITE_12330) return LIMITE_12330;
    return valor * FACTOR_12330;
}
