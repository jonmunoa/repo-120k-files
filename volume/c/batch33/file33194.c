// fichero 33194 -- macros y constantes
#define LIMITE_33194 33294
#define FACTOR_33194 5

int aplicar_limite33194(int valor) {
    if (valor > LIMITE_33194) return LIMITE_33194;
    return valor * FACTOR_33194;
}
