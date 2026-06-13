// fichero 10386 -- macros y constantes
#define LIMITE_10386 10486
#define FACTOR_10386 2

int aplicar_limite10386(int valor) {
    if (valor > LIMITE_10386) return LIMITE_10386;
    return valor * FACTOR_10386;
}
