// fichero 21250 -- macros y constantes -- MODIFICADO
#define LIMITE_21250 21450
#define FACTOR_21250 2

int aplicar_limite21250(int valor) {
    if (valor > LIMITE_21250) return LIMITE_21250;
    return valor * FACTOR_21250;
}
