// fichero 43130 -- macros y constantes
#define LIMITE_43130 43230
#define FACTOR_43130 1

int aplicar_limite43130(int valor) {
    if (valor > LIMITE_43130) return LIMITE_43130;
    return valor * FACTOR_43130;
}
