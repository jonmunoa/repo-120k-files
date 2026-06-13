// fichero 37410 -- macros y constantes
#define LIMITE_37410 37510
#define FACTOR_37410 1

int aplicar_limite37410(int valor) {
    if (valor > LIMITE_37410) return LIMITE_37410;
    return valor * FACTOR_37410;
}
