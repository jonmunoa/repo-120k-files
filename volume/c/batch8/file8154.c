// fichero 8154 -- macros y constantes
#define LIMITE_8154 8254
#define FACTOR_8154 5

int aplicar_limite8154(int valor) {
    if (valor > LIMITE_8154) return LIMITE_8154;
    return valor * FACTOR_8154;
}
