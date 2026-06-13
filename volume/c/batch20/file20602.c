// fichero 20602 -- macros y constantes
#define LIMITE_20602 20702
#define FACTOR_20602 3

int aplicar_limite20602(int valor) {
    if (valor > LIMITE_20602) return LIMITE_20602;
    return valor * FACTOR_20602;
}
