// fichero 52666 -- macros y constantes
#define LIMITE_52666 52766
#define FACTOR_52666 2

int aplicar_limite52666(int valor) {
    if (valor > LIMITE_52666) return LIMITE_52666;
    return valor * FACTOR_52666;
}
