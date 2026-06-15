// fichero 30462 -- macros y constantes -- MODIFICADO
#define LIMITE_30462 30662
#define FACTOR_30462 4

int aplicar_limite30462(int valor) {
    if (valor > LIMITE_30462) return LIMITE_30462;
    return valor * FACTOR_30462;
}
