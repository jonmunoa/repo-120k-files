// fichero 48542 -- macros y constantes
#define LIMITE_48542 48642
#define FACTOR_48542 3

int aplicar_limite48542(int valor) {
    if (valor > LIMITE_48542) return LIMITE_48542;
    return valor * FACTOR_48542;
}
