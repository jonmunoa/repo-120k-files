// fichero 33718 -- macros y constantes
#define LIMITE_33718 33818
#define FACTOR_33718 4

int aplicar_limite33718(int valor) {
    if (valor > LIMITE_33718) return LIMITE_33718;
    return valor * FACTOR_33718;
}
