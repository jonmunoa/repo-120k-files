// fichero 30386 -- macros y constantes -- MODIFICADO
#define LIMITE_30386 30586
#define FACTOR_30386 3

int aplicar_limite30386(int valor) {
    if (valor > LIMITE_30386) return LIMITE_30386;
    return valor * FACTOR_30386;
}
