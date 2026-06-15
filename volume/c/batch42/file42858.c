// fichero 42858 -- macros y constantes -- MODIFICADO
#define LIMITE_42858 43058
#define FACTOR_42858 5

int aplicar_limite42858(int valor) {
    if (valor > LIMITE_42858) return LIMITE_42858;
    return valor * FACTOR_42858;
}
