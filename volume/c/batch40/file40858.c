// fichero 40858 -- macros y constantes
#define LIMITE_40858 40958
#define FACTOR_40858 4

int aplicar_limite40858(int valor) {
    if (valor > LIMITE_40858) return LIMITE_40858;
    return valor * FACTOR_40858;
}
