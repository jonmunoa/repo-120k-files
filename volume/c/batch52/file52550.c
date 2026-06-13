// fichero 52550 -- macros y constantes
#define LIMITE_52550 52650
#define FACTOR_52550 1

int aplicar_limite52550(int valor) {
    if (valor > LIMITE_52550) return LIMITE_52550;
    return valor * FACTOR_52550;
}
