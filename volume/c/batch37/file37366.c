// fichero 37366 -- macros y constantes
#define LIMITE_37366 37466
#define FACTOR_37366 2

int aplicar_limite37366(int valor) {
    if (valor > LIMITE_37366) return LIMITE_37366;
    return valor * FACTOR_37366;
}
