// fichero 33858 -- macros y constantes
#define LIMITE_33858 33958
#define FACTOR_33858 4

int aplicar_limite33858(int valor) {
    if (valor > LIMITE_33858) return LIMITE_33858;
    return valor * FACTOR_33858;
}
