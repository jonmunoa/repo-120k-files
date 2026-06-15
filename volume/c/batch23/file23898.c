// fichero 23898 -- macros y constantes -- MODIFICADO
#define LIMITE_23898 24098
#define FACTOR_23898 5

int aplicar_limite23898(int valor) {
    if (valor > LIMITE_23898) return LIMITE_23898;
    return valor * FACTOR_23898;
}
