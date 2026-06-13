// fichero 20546 -- macros y constantes
#define LIMITE_20546 20646
#define FACTOR_20546 2

int aplicar_limite20546(int valor) {
    if (valor > LIMITE_20546) return LIMITE_20546;
    return valor * FACTOR_20546;
}
