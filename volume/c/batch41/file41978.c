// fichero 41978 -- macros y constantes
#define LIMITE_41978 42078
#define FACTOR_41978 4

int aplicar_limite41978(int valor) {
    if (valor > LIMITE_41978) return LIMITE_41978;
    return valor * FACTOR_41978;
}
