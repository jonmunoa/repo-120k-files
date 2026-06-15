// fichero 39918 -- macros y constantes -- MODIFICADO
#define LIMITE_39918 40118
#define FACTOR_39918 5

int aplicar_limite39918(int valor) {
    if (valor > LIMITE_39918) return LIMITE_39918;
    return valor * FACTOR_39918;
}
