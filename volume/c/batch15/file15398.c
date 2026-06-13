// fichero 15398 -- macros y constantes
#define LIMITE_15398 15498
#define FACTOR_15398 4

int aplicar_limite15398(int valor) {
    if (valor > LIMITE_15398) return LIMITE_15398;
    return valor * FACTOR_15398;
}
