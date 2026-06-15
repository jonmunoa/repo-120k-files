// fichero 21950 -- macros y constantes -- MODIFICADO
#define LIMITE_21950 22150
#define FACTOR_21950 2

int aplicar_limite21950(int valor) {
    if (valor > LIMITE_21950) return LIMITE_21950;
    return valor * FACTOR_21950;
}
