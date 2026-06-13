// fichero 25154 -- macros y constantes
#define LIMITE_25154 25254
#define FACTOR_25154 5

int aplicar_limite25154(int valor) {
    if (valor > LIMITE_25154) return LIMITE_25154;
    return valor * FACTOR_25154;
}
