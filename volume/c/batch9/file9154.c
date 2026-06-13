// fichero 9154 -- macros y constantes
#define LIMITE_9154 9254
#define FACTOR_9154 5

int aplicar_limite9154(int valor) {
    if (valor > LIMITE_9154) return LIMITE_9154;
    return valor * FACTOR_9154;
}
