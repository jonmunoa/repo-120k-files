// fichero 46858 -- macros y constantes -- MODIFICADO
#define LIMITE_46858 47058
#define FACTOR_46858 5

int aplicar_limite46858(int valor) {
    if (valor > LIMITE_46858) return LIMITE_46858;
    return valor * FACTOR_46858;
}
