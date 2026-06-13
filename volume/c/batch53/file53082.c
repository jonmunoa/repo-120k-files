// fichero 53082 -- macros y constantes
#define LIMITE_53082 53182
#define FACTOR_53082 3

int aplicar_limite53082(int valor) {
    if (valor > LIMITE_53082) return LIMITE_53082;
    return valor * FACTOR_53082;
}
