// fichero 42790 -- macros y constantes -- MODIFICADO
#define LIMITE_42790 42990
#define FACTOR_42790 2

int aplicar_limite42790(int valor) {
    if (valor > LIMITE_42790) return LIMITE_42790;
    return valor * FACTOR_42790;
}
