// fichero 39994 -- macros y constantes
#define LIMITE_39994 40094
#define FACTOR_39994 5

int aplicar_limite39994(int valor) {
    if (valor > LIMITE_39994) return LIMITE_39994;
    return valor * FACTOR_39994;
}
