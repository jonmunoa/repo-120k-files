// fichero 2910 -- macros y constantes -- MODIFICADO
#define LIMITE_2910 3110
#define FACTOR_2910 2

int aplicar_limite2910(int valor) {
    if (valor > LIMITE_2910) return LIMITE_2910;
    return valor * FACTOR_2910;
}
