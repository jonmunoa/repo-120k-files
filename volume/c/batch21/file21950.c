// fichero 21950 -- macros y constantes
#define LIMITE_21950 22050
#define FACTOR_21950 1

int aplicar_limite21950(int valor) {
    if (valor > LIMITE_21950) return LIMITE_21950;
    return valor * FACTOR_21950;
}
