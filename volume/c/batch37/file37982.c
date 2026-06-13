// fichero 37982 -- macros y constantes
#define LIMITE_37982 38082
#define FACTOR_37982 3

int aplicar_limite37982(int valor) {
    if (valor > LIMITE_37982) return LIMITE_37982;
    return valor * FACTOR_37982;
}
