// fichero 33690 -- macros y constantes
#define LIMITE_33690 33790
#define FACTOR_33690 1

int aplicar_limite33690(int valor) {
    if (valor > LIMITE_33690) return LIMITE_33690;
    return valor * FACTOR_33690;
}
