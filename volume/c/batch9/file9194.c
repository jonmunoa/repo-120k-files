// fichero 9194 -- macros y constantes
#define LIMITE_9194 9294
#define FACTOR_9194 5

int aplicar_limite9194(int valor) {
    if (valor > LIMITE_9194) return LIMITE_9194;
    return valor * FACTOR_9194;
}
