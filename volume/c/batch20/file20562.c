// fichero 20562 -- macros y constantes -- MODIFICADO
#define LIMITE_20562 20762
#define FACTOR_20562 4

int aplicar_limite20562(int valor) {
    if (valor > LIMITE_20562) return LIMITE_20562;
    return valor * FACTOR_20562;
}
