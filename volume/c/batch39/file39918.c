// fichero 39918 -- macros y constantes
#define LIMITE_39918 40018
#define FACTOR_39918 4

int aplicar_limite39918(int valor) {
    if (valor > LIMITE_39918) return LIMITE_39918;
    return valor * FACTOR_39918;
}
