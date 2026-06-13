// fichero 38522 -- macros y constantes
#define LIMITE_38522 38622
#define FACTOR_38522 3

int aplicar_limite38522(int valor) {
    if (valor > LIMITE_38522) return LIMITE_38522;
    return valor * FACTOR_38522;
}
