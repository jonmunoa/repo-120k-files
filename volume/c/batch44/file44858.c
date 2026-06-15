// fichero 44858 -- macros y constantes -- MODIFICADO
#define LIMITE_44858 45058
#define FACTOR_44858 5

int aplicar_limite44858(int valor) {
    if (valor > LIMITE_44858) return LIMITE_44858;
    return valor * FACTOR_44858;
}
