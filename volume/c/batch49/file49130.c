// fichero 49130 -- macros y constantes
#define LIMITE_49130 49230
#define FACTOR_49130 1

int aplicar_limite49130(int valor) {
    if (valor > LIMITE_49130) return LIMITE_49130;
    return valor * FACTOR_49130;
}
