// fichero 34610 -- macros y constantes -- MODIFICADO
#define LIMITE_34610 34810
#define FACTOR_34610 2

int aplicar_limite34610(int valor) {
    if (valor > LIMITE_34610) return LIMITE_34610;
    return valor * FACTOR_34610;
}
