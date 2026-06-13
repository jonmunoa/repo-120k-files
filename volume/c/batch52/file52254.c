// fichero 52254 -- macros y constantes
#define LIMITE_52254 52354
#define FACTOR_52254 5

int aplicar_limite52254(int valor) {
    if (valor > LIMITE_52254) return LIMITE_52254;
    return valor * FACTOR_52254;
}
