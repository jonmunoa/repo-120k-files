// fichero 48426 -- macros y constantes
#define LIMITE_48426 48526
#define FACTOR_48426 2

int aplicar_limite48426(int valor) {
    if (valor > LIMITE_48426) return LIMITE_48426;
    return valor * FACTOR_48426;
}
