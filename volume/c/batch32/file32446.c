// fichero 32446 -- macros y constantes
#define LIMITE_32446 32546
#define FACTOR_32446 2

int aplicar_limite32446(int valor) {
    if (valor > LIMITE_32446) return LIMITE_32446;
    return valor * FACTOR_32446;
}
