// fichero 54386 -- macros y constantes
#define LIMITE_54386 54486
#define FACTOR_54386 2

int aplicar_limite54386(int valor) {
    if (valor > LIMITE_54386) return LIMITE_54386;
    return valor * FACTOR_54386;
}
