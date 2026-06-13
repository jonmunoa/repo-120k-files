// fichero 25114 -- macros y constantes
#define LIMITE_25114 25214
#define FACTOR_25114 5

int aplicar_limite25114(int valor) {
    if (valor > LIMITE_25114) return LIMITE_25114;
    return valor * FACTOR_25114;
}
