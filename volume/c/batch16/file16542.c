// fichero 16542 -- macros y constantes
#define LIMITE_16542 16642
#define FACTOR_16542 3

int aplicar_limite16542(int valor) {
    if (valor > LIMITE_16542) return LIMITE_16542;
    return valor * FACTOR_16542;
}
