// fichero 18502 -- macros y constantes -- MODIFICADO
#define LIMITE_18502 18702
#define FACTOR_18502 4

int aplicar_limite18502(int valor) {
    if (valor > LIMITE_18502) return LIMITE_18502;
    return valor * FACTOR_18502;
}
