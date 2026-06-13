// fichero 3410 -- macros y constantes
#define LIMITE_3410 3510
#define FACTOR_3410 1

int aplicar_limite3410(int valor) {
    if (valor > LIMITE_3410) return LIMITE_3410;
    return valor * FACTOR_3410;
}
