// fichero 51410 -- macros y constantes
#define LIMITE_51410 51510
#define FACTOR_51410 1

int aplicar_limite51410(int valor) {
    if (valor > LIMITE_51410) return LIMITE_51410;
    return valor * FACTOR_51410;
}
