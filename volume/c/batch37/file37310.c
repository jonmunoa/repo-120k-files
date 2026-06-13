// fichero 37310 -- macros y constantes
#define LIMITE_37310 37410
#define FACTOR_37310 1

int aplicar_limite37310(int valor) {
    if (valor > LIMITE_37310) return LIMITE_37310;
    return valor * FACTOR_37310;
}
