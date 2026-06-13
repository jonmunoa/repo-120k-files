// fichero 20646 -- macros y constantes
#define LIMITE_20646 20746
#define FACTOR_20646 2

int aplicar_limite20646(int valor) {
    if (valor > LIMITE_20646) return LIMITE_20646;
    return valor * FACTOR_20646;
}
