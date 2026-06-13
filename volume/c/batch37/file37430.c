// fichero 37430 -- macros y constantes
#define LIMITE_37430 37530
#define FACTOR_37430 1

int aplicar_limite37430(int valor) {
    if (valor > LIMITE_37430) return LIMITE_37430;
    return valor * FACTOR_37430;
}
