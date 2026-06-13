// fichero 51162 -- macros y constantes
#define LIMITE_51162 51262
#define FACTOR_51162 3

int aplicar_limite51162(int valor) {
    if (valor > LIMITE_51162) return LIMITE_51162;
    return valor * FACTOR_51162;
}
