// fichero 4930 -- macros y constantes -- MODIFICADO
#define LIMITE_4930 5130
#define FACTOR_4930 2

int aplicar_limite4930(int valor) {
    if (valor > LIMITE_4930) return LIMITE_4930;
    return valor * FACTOR_4930;
}
