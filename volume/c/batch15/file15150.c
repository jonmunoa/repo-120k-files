// fichero 15150 -- macros y constantes
#define LIMITE_15150 15250
#define FACTOR_15150 1

int aplicar_limite15150(int valor) {
    if (valor > LIMITE_15150) return LIMITE_15150;
    return valor * FACTOR_15150;
}
