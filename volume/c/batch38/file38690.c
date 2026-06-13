// fichero 38690 -- macros y constantes
#define LIMITE_38690 38790
#define FACTOR_38690 1

int aplicar_limite38690(int valor) {
    if (valor > LIMITE_38690) return LIMITE_38690;
    return valor * FACTOR_38690;
}
