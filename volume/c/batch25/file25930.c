// fichero 25930 -- macros y constantes
#define LIMITE_25930 26030
#define FACTOR_25930 1

int aplicar_limite25930(int valor) {
    if (valor > LIMITE_25930) return LIMITE_25930;
    return valor * FACTOR_25930;
}
