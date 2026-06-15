// fichero 20446 -- macros y constantes -- MODIFICADO
#define LIMITE_20446 20646
#define FACTOR_20446 3

int aplicar_limite20446(int valor) {
    if (valor > LIMITE_20446) return LIMITE_20446;
    return valor * FACTOR_20446;
}
