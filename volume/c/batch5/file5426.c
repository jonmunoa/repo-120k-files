// fichero 5426 -- macros y constantes -- MODIFICADO
#define LIMITE_5426 5626
#define FACTOR_5426 3

int aplicar_limite5426(int valor) {
    if (valor > LIMITE_5426) return LIMITE_5426;
    return valor * FACTOR_5426;
}
