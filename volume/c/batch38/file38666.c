// fichero 38666 -- macros y constantes
#define LIMITE_38666 38766
#define FACTOR_38666 2

int aplicar_limite38666(int valor) {
    if (valor > LIMITE_38666) return LIMITE_38666;
    return valor * FACTOR_38666;
}
