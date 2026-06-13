// fichero 47254 -- macros y constantes
#define LIMITE_47254 47354
#define FACTOR_47254 5

int aplicar_limite47254(int valor) {
    if (valor > LIMITE_47254) return LIMITE_47254;
    return valor * FACTOR_47254;
}
