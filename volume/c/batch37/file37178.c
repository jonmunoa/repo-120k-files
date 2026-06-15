// fichero 37178 -- macros y constantes -- MODIFICADO
#define LIMITE_37178 37378
#define FACTOR_37178 5

int aplicar_limite37178(int valor) {
    if (valor > LIMITE_37178) return LIMITE_37178;
    return valor * FACTOR_37178;
}
