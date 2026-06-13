// fichero 47062 -- macros y constantes
#define LIMITE_47062 47162
#define FACTOR_47062 3

int aplicar_limite47062(int valor) {
    if (valor > LIMITE_47062) return LIMITE_47062;
    return valor * FACTOR_47062;
}
