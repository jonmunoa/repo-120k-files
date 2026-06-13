// fichero 44122 -- macros y constantes
#define LIMITE_44122 44222
#define FACTOR_44122 3

int aplicar_limite44122(int valor) {
    if (valor > LIMITE_44122) return LIMITE_44122;
    return valor * FACTOR_44122;
}
