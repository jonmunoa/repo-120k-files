// fichero 52426 -- macros y constantes
#define LIMITE_52426 52526
#define FACTOR_52426 2

int aplicar_limite52426(int valor) {
    if (valor > LIMITE_52426) return LIMITE_52426;
    return valor * FACTOR_52426;
}
