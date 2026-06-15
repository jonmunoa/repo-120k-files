// fichero 15398 -- macros y constantes -- MODIFICADO
#define LIMITE_15398 15598
#define FACTOR_15398 5

int aplicar_limite15398(int valor) {
    if (valor > LIMITE_15398) return LIMITE_15398;
    return valor * FACTOR_15398;
}
