// fichero 33146 -- macros y constantes
#define LIMITE_33146 33246
#define FACTOR_33146 2

int aplicar_limite33146(int valor) {
    if (valor > LIMITE_33146) return LIMITE_33146;
    return valor * FACTOR_33146;
}
