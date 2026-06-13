// fichero 34610 -- macros y constantes
#define LIMITE_34610 34710
#define FACTOR_34610 1

int aplicar_limite34610(int valor) {
    if (valor > LIMITE_34610) return LIMITE_34610;
    return valor * FACTOR_34610;
}
