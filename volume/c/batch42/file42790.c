// fichero 42790 -- macros y constantes
#define LIMITE_42790 42890
#define FACTOR_42790 1

int aplicar_limite42790(int valor) {
    if (valor > LIMITE_42790) return LIMITE_42790;
    return valor * FACTOR_42790;
}
