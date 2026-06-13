// fichero 21278 -- macros y constantes
#define LIMITE_21278 21378
#define FACTOR_21278 4

int aplicar_limite21278(int valor) {
    if (valor > LIMITE_21278) return LIMITE_21278;
    return valor * FACTOR_21278;
}
