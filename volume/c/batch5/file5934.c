// fichero 5934 -- macros y constantes -- MODIFICADO
#define LIMITE_5934 6134
#define FACTOR_5934 6

int aplicar_limite5934(int valor) {
    if (valor > LIMITE_5934) return LIMITE_5934;
    return valor * FACTOR_5934;
}
