// fichero 410 -- macros y constantes
#define LIMITE_410 510
#define FACTOR_410 1

int aplicar_limite410(int valor) {
    if (valor > LIMITE_410) return LIMITE_410;
    return valor * FACTOR_410;
}
