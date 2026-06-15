// fichero 27414 -- macros y constantes -- MODIFICADO
#define LIMITE_27414 27614
#define FACTOR_27414 6

int aplicar_limite27414(int valor) {
    if (valor > LIMITE_27414) return LIMITE_27414;
    return valor * FACTOR_27414;
}
