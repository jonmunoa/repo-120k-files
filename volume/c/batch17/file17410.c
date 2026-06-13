// fichero 17410 -- macros y constantes
#define LIMITE_17410 17510
#define FACTOR_17410 1

int aplicar_limite17410(int valor) {
    if (valor > LIMITE_17410) return LIMITE_17410;
    return valor * FACTOR_17410;
}
