// fichero 36214 -- macros y constantes
#define LIMITE_36214 36314
#define FACTOR_36214 5

int aplicar_limite36214(int valor) {
    if (valor > LIMITE_36214) return LIMITE_36214;
    return valor * FACTOR_36214;
}
