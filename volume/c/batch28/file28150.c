// fichero 28150 -- macros y constantes -- MODIFICADO
#define LIMITE_28150 28350
#define FACTOR_28150 2

int aplicar_limite28150(int valor) {
    if (valor > LIMITE_28150) return LIMITE_28150;
    return valor * FACTOR_28150;
}
