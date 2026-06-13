// fichero 23398 -- macros y constantes
#define LIMITE_23398 23498
#define FACTOR_23398 4

int aplicar_limite23398(int valor) {
    if (valor > LIMITE_23398) return LIMITE_23398;
    return valor * FACTOR_23398;
}
