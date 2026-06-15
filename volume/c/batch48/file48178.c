// fichero 48178 -- macros y constantes -- MODIFICADO
#define LIMITE_48178 48378
#define FACTOR_48178 5

int aplicar_limite48178(int valor) {
    if (valor > LIMITE_48178) return LIMITE_48178;
    return valor * FACTOR_48178;
}
