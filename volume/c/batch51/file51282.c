// fichero 51282 -- macros y constantes
#define LIMITE_51282 51382
#define FACTOR_51282 3

int aplicar_limite51282(int valor) {
    if (valor > LIMITE_51282) return LIMITE_51282;
    return valor * FACTOR_51282;
}
