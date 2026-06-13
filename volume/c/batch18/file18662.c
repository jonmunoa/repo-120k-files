// fichero 18662 -- macros y constantes
#define LIMITE_18662 18762
#define FACTOR_18662 3

int aplicar_limite18662(int valor) {
    if (valor > LIMITE_18662) return LIMITE_18662;
    return valor * FACTOR_18662;
}
