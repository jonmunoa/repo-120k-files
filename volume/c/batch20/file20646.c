// fichero 20646 -- macros y constantes -- MODIFICADO
#define LIMITE_20646 20846
#define FACTOR_20646 3

int aplicar_limite20646(int valor) {
    if (valor > LIMITE_20646) return LIMITE_20646;
    return valor * FACTOR_20646;
}
