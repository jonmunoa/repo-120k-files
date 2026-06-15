// fichero 25222 -- macros y constantes -- MODIFICADO
#define LIMITE_25222 25422
#define FACTOR_25222 4

int aplicar_limite25222(int valor) {
    if (valor > LIMITE_25222) return LIMITE_25222;
    return valor * FACTOR_25222;
}
