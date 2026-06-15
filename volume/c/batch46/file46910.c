// fichero 46910 -- macros y constantes -- MODIFICADO
#define LIMITE_46910 47110
#define FACTOR_46910 2

int aplicar_limite46910(int valor) {
    if (valor > LIMITE_46910) return LIMITE_46910;
    return valor * FACTOR_46910;
}
