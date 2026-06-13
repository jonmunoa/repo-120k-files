// fichero 13238 -- macros y constantes
#define LIMITE_13238 13338
#define FACTOR_13238 4

int aplicar_limite13238(int valor) {
    if (valor > LIMITE_13238) return LIMITE_13238;
    return valor * FACTOR_13238;
}
