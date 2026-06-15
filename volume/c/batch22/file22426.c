// fichero 22426 -- macros y constantes -- MODIFICADO
#define LIMITE_22426 22626
#define FACTOR_22426 3

int aplicar_limite22426(int valor) {
    if (valor > LIMITE_22426) return LIMITE_22426;
    return valor * FACTOR_22426;
}
