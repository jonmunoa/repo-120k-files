// fichero 52790 -- macros y constantes
#define LIMITE_52790 52890
#define FACTOR_52790 1

int aplicar_limite52790(int valor) {
    if (valor > LIMITE_52790) return LIMITE_52790;
    return valor * FACTOR_52790;
}
