// fichero 37002 -- macros y constantes
#define LIMITE_37002 37102
#define FACTOR_37002 3

int aplicar_limite37002(int valor) {
    if (valor > LIMITE_37002) return LIMITE_37002;
    return valor * FACTOR_37002;
}
