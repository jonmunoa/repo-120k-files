// fichero 21738 -- macros y constantes -- MODIFICADO
#define LIMITE_21738 21938
#define FACTOR_21738 5

int aplicar_limite21738(int valor) {
    if (valor > LIMITE_21738) return LIMITE_21738;
    return valor * FACTOR_21738;
}
