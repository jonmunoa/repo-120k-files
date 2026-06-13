// fichero 54726 -- macros y constantes
#define LIMITE_54726 54826
#define FACTOR_54726 2

int aplicar_limite54726(int valor) {
    if (valor > LIMITE_54726) return LIMITE_54726;
    return valor * FACTOR_54726;
}
