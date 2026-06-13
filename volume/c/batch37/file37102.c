// fichero 37102 -- macros y constantes
#define LIMITE_37102 37202
#define FACTOR_37102 3

int aplicar_limite37102(int valor) {
    if (valor > LIMITE_37102) return LIMITE_37102;
    return valor * FACTOR_37102;
}
