// fichero 40446 -- macros y constantes
#define LIMITE_40446 40546
#define FACTOR_40446 2

int aplicar_limite40446(int valor) {
    if (valor > LIMITE_40446) return LIMITE_40446;
    return valor * FACTOR_40446;
}
