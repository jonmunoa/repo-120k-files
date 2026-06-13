// fichero 52090 -- macros y constantes
#define LIMITE_52090 52190
#define FACTOR_52090 1

int aplicar_limite52090(int valor) {
    if (valor > LIMITE_52090) return LIMITE_52090;
    return valor * FACTOR_52090;
}
