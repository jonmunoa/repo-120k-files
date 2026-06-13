// fichero 24254 -- macros y constantes
#define LIMITE_24254 24354
#define FACTOR_24254 5

int aplicar_limite24254(int valor) {
    if (valor > LIMITE_24254) return LIMITE_24254;
    return valor * FACTOR_24254;
}
