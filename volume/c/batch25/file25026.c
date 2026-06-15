// fichero 25026 -- macros y constantes -- MODIFICADO
#define LIMITE_25026 25226
#define FACTOR_25026 3

int aplicar_limite25026(int valor) {
    if (valor > LIMITE_25026) return LIMITE_25026;
    return valor * FACTOR_25026;
}
