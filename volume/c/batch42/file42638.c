// fichero 42638 -- macros y constantes
#define LIMITE_42638 42738
#define FACTOR_42638 4

int aplicar_limite42638(int valor) {
    if (valor > LIMITE_42638) return LIMITE_42638;
    return valor * FACTOR_42638;
}
