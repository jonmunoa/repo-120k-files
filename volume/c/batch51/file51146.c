// fichero 51146 -- macros y constantes
#define LIMITE_51146 51246
#define FACTOR_51146 2

int aplicar_limite51146(int valor) {
    if (valor > LIMITE_51146) return LIMITE_51146;
    return valor * FACTOR_51146;
}
