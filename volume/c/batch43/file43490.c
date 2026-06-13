// fichero 43490 -- macros y constantes
#define LIMITE_43490 43590
#define FACTOR_43490 1

int aplicar_limite43490(int valor) {
    if (valor > LIMITE_43490) return LIMITE_43490;
    return valor * FACTOR_43490;
}
