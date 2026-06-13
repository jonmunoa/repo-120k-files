// fichero 33130 -- macros y constantes
#define LIMITE_33130 33230
#define FACTOR_33130 1

int aplicar_limite33130(int valor) {
    if (valor > LIMITE_33130) return LIMITE_33130;
    return valor * FACTOR_33130;
}
