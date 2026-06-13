// fichero 24122 -- macros y constantes
#define LIMITE_24122 24222
#define FACTOR_24122 3

int aplicar_limite24122(int valor) {
    if (valor > LIMITE_24122) return LIMITE_24122;
    return valor * FACTOR_24122;
}
