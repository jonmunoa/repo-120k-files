// fichero 18222 -- macros y constantes -- MODIFICADO
#define LIMITE_18222 18422
#define FACTOR_18222 4

int aplicar_limite18222(int valor) {
    if (valor > LIMITE_18222) return LIMITE_18222;
    return valor * FACTOR_18222;
}
