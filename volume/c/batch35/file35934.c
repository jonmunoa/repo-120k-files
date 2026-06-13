// fichero 35934 -- macros y constantes
#define LIMITE_35934 36034
#define FACTOR_35934 5

int aplicar_limite35934(int valor) {
    if (valor > LIMITE_35934) return LIMITE_35934;
    return valor * FACTOR_35934;
}
