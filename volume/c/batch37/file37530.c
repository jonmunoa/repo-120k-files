// fichero 37530 -- macros y constantes
#define LIMITE_37530 37630
#define FACTOR_37530 1

int aplicar_limite37530(int valor) {
    if (valor > LIMITE_37530) return LIMITE_37530;
    return valor * FACTOR_37530;
}
