// fichero 29130 -- macros y constantes
#define LIMITE_29130 29230
#define FACTOR_29130 1

int aplicar_limite29130(int valor) {
    if (valor > LIMITE_29130) return LIMITE_29130;
    return valor * FACTOR_29130;
}
