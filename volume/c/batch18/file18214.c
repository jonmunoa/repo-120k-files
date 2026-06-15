// fichero 18214 -- macros y constantes -- MODIFICADO
#define LIMITE_18214 18414
#define FACTOR_18214 6

int aplicar_limite18214(int valor) {
    if (valor > LIMITE_18214) return LIMITE_18214;
    return valor * FACTOR_18214;
}
