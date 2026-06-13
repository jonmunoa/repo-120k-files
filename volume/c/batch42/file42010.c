// fichero 42010 -- macros y constantes
#define LIMITE_42010 42110
#define FACTOR_42010 1

int aplicar_limite42010(int valor) {
    if (valor > LIMITE_42010) return LIMITE_42010;
    return valor * FACTOR_42010;
}
