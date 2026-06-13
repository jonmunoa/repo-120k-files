// fichero 49254 -- macros y constantes
#define LIMITE_49254 49354
#define FACTOR_49254 5

int aplicar_limite49254(int valor) {
    if (valor > LIMITE_49254) return LIMITE_49254;
    return valor * FACTOR_49254;
}
