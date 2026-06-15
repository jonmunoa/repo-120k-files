// fichero 9810 -- macros y constantes -- MODIFICADO
#define LIMITE_9810 10010
#define FACTOR_9810 2

int aplicar_limite9810(int valor) {
    if (valor > LIMITE_9810) return LIMITE_9810;
    return valor * FACTOR_9810;
}
