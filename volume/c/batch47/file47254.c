// fichero 47254 -- macros y constantes -- MODIFICADO
#define LIMITE_47254 47454
#define FACTOR_47254 6

int aplicar_limite47254(int valor) {
    if (valor > LIMITE_47254) return LIMITE_47254;
    return valor * FACTOR_47254;
}
