// fichero 41150 -- macros y constantes
#define LIMITE_41150 41250
#define FACTOR_41150 1

int aplicar_limite41150(int valor) {
    if (valor > LIMITE_41150) return LIMITE_41150;
    return valor * FACTOR_41150;
}
