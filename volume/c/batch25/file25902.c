// fichero 25902 -- macros y constantes -- MODIFICADO
#define LIMITE_25902 26102
#define FACTOR_25902 4

int aplicar_limite25902(int valor) {
    if (valor > LIMITE_25902) return LIMITE_25902;
    return valor * FACTOR_25902;
}
