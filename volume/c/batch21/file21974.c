// fichero 21974 -- macros y constantes
#define LIMITE_21974 22074
#define FACTOR_21974 5

int aplicar_limite21974(int valor) {
    if (valor > LIMITE_21974) return LIMITE_21974;
    return valor * FACTOR_21974;
}
