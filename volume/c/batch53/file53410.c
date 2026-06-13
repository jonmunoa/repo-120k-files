// fichero 53410 -- macros y constantes
#define LIMITE_53410 53510
#define FACTOR_53410 1

int aplicar_limite53410(int valor) {
    if (valor > LIMITE_53410) return LIMITE_53410;
    return valor * FACTOR_53410;
}
