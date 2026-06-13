// fichero 41386 -- macros y constantes
#define LIMITE_41386 41486
#define FACTOR_41386 2

int aplicar_limite41386(int valor) {
    if (valor > LIMITE_41386) return LIMITE_41386;
    return valor * FACTOR_41386;
}
