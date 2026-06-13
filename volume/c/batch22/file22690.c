// fichero 22690 -- macros y constantes
#define LIMITE_22690 22790
#define FACTOR_22690 1

int aplicar_limite22690(int valor) {
    if (valor > LIMITE_22690) return LIMITE_22690;
    return valor * FACTOR_22690;
}
