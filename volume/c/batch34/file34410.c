// fichero 34410 -- macros y constantes
#define LIMITE_34410 34510
#define FACTOR_34410 1

int aplicar_limite34410(int valor) {
    if (valor > LIMITE_34410) return LIMITE_34410;
    return valor * FACTOR_34410;
}
