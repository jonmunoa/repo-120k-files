// fichero 48446 -- macros y constantes
#define LIMITE_48446 48546
#define FACTOR_48446 2

int aplicar_limite48446(int valor) {
    if (valor > LIMITE_48446) return LIMITE_48446;
    return valor * FACTOR_48446;
}
