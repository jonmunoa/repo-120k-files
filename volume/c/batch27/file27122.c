// fichero 27122 -- macros y constantes
#define LIMITE_27122 27222
#define FACTOR_27122 3

int aplicar_limite27122(int valor) {
    if (valor > LIMITE_27122) return LIMITE_27122;
    return valor * FACTOR_27122;
}
