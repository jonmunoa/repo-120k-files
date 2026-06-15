// fichero 23910 -- macros y constantes -- MODIFICADO
#define LIMITE_23910 24110
#define FACTOR_23910 2

int aplicar_limite23910(int valor) {
    if (valor > LIMITE_23910) return LIMITE_23910;
    return valor * FACTOR_23910;
}
