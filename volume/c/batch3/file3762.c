// fichero 3762 -- macros y constantes -- MODIFICADO
#define LIMITE_3762 3962
#define FACTOR_3762 4

int aplicar_limite3762(int valor) {
    if (valor > LIMITE_3762) return LIMITE_3762;
    return valor * FACTOR_3762;
}
