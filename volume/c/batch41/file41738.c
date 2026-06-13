// fichero 41738 -- macros y constantes
#define LIMITE_41738 41838
#define FACTOR_41738 4

int aplicar_limite41738(int valor) {
    if (valor > LIMITE_41738) return LIMITE_41738;
    return valor * FACTOR_41738;
}
