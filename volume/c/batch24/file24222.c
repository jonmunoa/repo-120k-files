// fichero 24222 -- macros y constantes
#define LIMITE_24222 24322
#define FACTOR_24222 3

int aplicar_limite24222(int valor) {
    if (valor > LIMITE_24222) return LIMITE_24222;
    return valor * FACTOR_24222;
}
