// fichero 33002 -- macros y constantes
#define LIMITE_33002 33102
#define FACTOR_33002 3

int aplicar_limite33002(int valor) {
    if (valor > LIMITE_33002) return LIMITE_33002;
    return valor * FACTOR_33002;
}
