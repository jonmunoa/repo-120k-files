// fichero 3154 -- macros y constantes
#define LIMITE_3154 3254
#define FACTOR_3154 5

int aplicar_limite3154(int valor) {
    if (valor > LIMITE_3154) return LIMITE_3154;
    return valor * FACTOR_3154;
}
