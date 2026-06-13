// fichero 41934 -- macros y constantes
#define LIMITE_41934 42034
#define FACTOR_41934 5

int aplicar_limite41934(int valor) {
    if (valor > LIMITE_41934) return LIMITE_41934;
    return valor * FACTOR_41934;
}
