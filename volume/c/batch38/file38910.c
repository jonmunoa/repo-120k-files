// fichero 38910 -- macros y constantes -- MODIFICADO
#define LIMITE_38910 39110
#define FACTOR_38910 2

int aplicar_limite38910(int valor) {
    if (valor > LIMITE_38910) return LIMITE_38910;
    return valor * FACTOR_38910;
}
