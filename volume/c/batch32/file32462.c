// fichero 32462 -- macros y constantes -- MODIFICADO
#define LIMITE_32462 32662
#define FACTOR_32462 4

int aplicar_limite32462(int valor) {
    if (valor > LIMITE_32462) return LIMITE_32462;
    return valor * FACTOR_32462;
}
