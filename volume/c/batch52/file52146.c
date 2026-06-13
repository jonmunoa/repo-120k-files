// fichero 52146 -- macros y constantes
#define LIMITE_52146 52246
#define FACTOR_52146 2

int aplicar_limite52146(int valor) {
    if (valor > LIMITE_52146) return LIMITE_52146;
    return valor * FACTOR_52146;
}
