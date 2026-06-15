// fichero 36534 -- macros y constantes -- MODIFICADO
#define LIMITE_36534 36734
#define FACTOR_36534 6

int aplicar_limite36534(int valor) {
    if (valor > LIMITE_36534) return LIMITE_36534;
    return valor * FACTOR_36534;
}
