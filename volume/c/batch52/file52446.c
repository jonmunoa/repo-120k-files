// fichero 52446 -- macros y constantes
#define LIMITE_52446 52546
#define FACTOR_52446 2

int aplicar_limite52446(int valor) {
    if (valor > LIMITE_52446) return LIMITE_52446;
    return valor * FACTOR_52446;
}
