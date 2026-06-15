// fichero 18382 -- macros y constantes -- MODIFICADO
#define LIMITE_18382 18582
#define FACTOR_18382 4

int aplicar_limite18382(int valor) {
    if (valor > LIMITE_18382) return LIMITE_18382;
    return valor * FACTOR_18382;
}
