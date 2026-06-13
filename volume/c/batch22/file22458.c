// fichero 22458 -- macros y constantes
#define LIMITE_22458 22558
#define FACTOR_22458 4

int aplicar_limite22458(int valor) {
    if (valor > LIMITE_22458) return LIMITE_22458;
    return valor * FACTOR_22458;
}
