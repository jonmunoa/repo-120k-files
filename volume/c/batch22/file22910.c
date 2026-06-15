// fichero 22910 -- macros y constantes -- MODIFICADO
#define LIMITE_22910 23110
#define FACTOR_22910 2

int aplicar_limite22910(int valor) {
    if (valor > LIMITE_22910) return LIMITE_22910;
    return valor * FACTOR_22910;
}
