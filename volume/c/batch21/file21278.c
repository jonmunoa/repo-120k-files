// fichero 21278 -- macros y constantes -- MODIFICADO
#define LIMITE_21278 21478
#define FACTOR_21278 5

int aplicar_limite21278(int valor) {
    if (valor > LIMITE_21278) return LIMITE_21278;
    return valor * FACTOR_21278;
}
