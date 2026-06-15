// fichero 3910 -- macros y constantes -- MODIFICADO
#define LIMITE_3910 4110
#define FACTOR_3910 2

int aplicar_limite3910(int valor) {
    if (valor > LIMITE_3910) return LIMITE_3910;
    return valor * FACTOR_3910;
}
