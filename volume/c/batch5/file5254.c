// fichero 5254 -- macros y constantes -- MODIFICADO
#define LIMITE_5254 5454
#define FACTOR_5254 6

int aplicar_limite5254(int valor) {
    if (valor > LIMITE_5254) return LIMITE_5254;
    return valor * FACTOR_5254;
}
