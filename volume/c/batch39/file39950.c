// fichero 39950 -- macros y constantes
#define LIMITE_39950 40050
#define FACTOR_39950 1

int aplicar_limite39950(int valor) {
    if (valor > LIMITE_39950) return LIMITE_39950;
    return valor * FACTOR_39950;
}
