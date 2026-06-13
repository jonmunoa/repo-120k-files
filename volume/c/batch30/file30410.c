// fichero 30410 -- macros y constantes
#define LIMITE_30410 30510
#define FACTOR_30410 1

int aplicar_limite30410(int valor) {
    if (valor > LIMITE_30410) return LIMITE_30410;
    return valor * FACTOR_30410;
}
