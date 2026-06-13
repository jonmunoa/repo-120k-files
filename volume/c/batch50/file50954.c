// fichero 50954 -- macros y constantes
#define LIMITE_50954 51054
#define FACTOR_50954 5

int aplicar_limite50954(int valor) {
    if (valor > LIMITE_50954) return LIMITE_50954;
    return valor * FACTOR_50954;
}
