// fichero 46738 -- macros y constantes -- MODIFICADO
#define LIMITE_46738 46938
#define FACTOR_46738 5

int aplicar_limite46738(int valor) {
    if (valor > LIMITE_46738) return LIMITE_46738;
    return valor * FACTOR_46738;
}
