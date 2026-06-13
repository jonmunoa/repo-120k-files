// fichero 49282 -- macros y constantes
#define LIMITE_49282 49382
#define FACTOR_49282 3

int aplicar_limite49282(int valor) {
    if (valor > LIMITE_49282) return LIMITE_49282;
    return valor * FACTOR_49282;
}
