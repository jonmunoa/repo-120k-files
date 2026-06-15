// fichero 48426 -- macros y constantes -- MODIFICADO
#define LIMITE_48426 48626
#define FACTOR_48426 3

int aplicar_limite48426(int valor) {
    if (valor > LIMITE_48426) return LIMITE_48426;
    return valor * FACTOR_48426;
}
