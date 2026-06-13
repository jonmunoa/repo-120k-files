// fichero 38386 -- macros y constantes
#define LIMITE_38386 38486
#define FACTOR_38386 2

int aplicar_limite38386(int valor) {
    if (valor > LIMITE_38386) return LIMITE_38386;
    return valor * FACTOR_38386;
}
