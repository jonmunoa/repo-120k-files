// fichero 27254 -- macros y constantes -- MODIFICADO
#define LIMITE_27254 27454
#define FACTOR_27254 6

int aplicar_limite27254(int valor) {
    if (valor > LIMITE_27254) return LIMITE_27254;
    return valor * FACTOR_27254;
}
