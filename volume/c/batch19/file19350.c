// fichero 19350 -- macros y constantes
#define LIMITE_19350 19450
#define FACTOR_19350 1

int aplicar_limite19350(int valor) {
    if (valor > LIMITE_19350) return LIMITE_19350;
    return valor * FACTOR_19350;
}
