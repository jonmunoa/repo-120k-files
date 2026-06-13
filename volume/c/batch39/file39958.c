// fichero 39958 -- macros y constantes
#define LIMITE_39958 40058
#define FACTOR_39958 4

int aplicar_limite39958(int valor) {
    if (valor > LIMITE_39958) return LIMITE_39958;
    return valor * FACTOR_39958;
}
