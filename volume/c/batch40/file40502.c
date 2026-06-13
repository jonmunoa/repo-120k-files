// fichero 40502 -- macros y constantes
#define LIMITE_40502 40602
#define FACTOR_40502 3

int aplicar_limite40502(int valor) {
    if (valor > LIMITE_40502) return LIMITE_40502;
    return valor * FACTOR_40502;
}
