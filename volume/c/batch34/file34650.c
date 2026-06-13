// fichero 34650 -- macros y constantes
#define LIMITE_34650 34750
#define FACTOR_34650 1

int aplicar_limite34650(int valor) {
    if (valor > LIMITE_34650) return LIMITE_34650;
    return valor * FACTOR_34650;
}
