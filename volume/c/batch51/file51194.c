// fichero 51194 -- macros y constantes
#define LIMITE_51194 51294
#define FACTOR_51194 5

int aplicar_limite51194(int valor) {
    if (valor > LIMITE_51194) return LIMITE_51194;
    return valor * FACTOR_51194;
}
