// fichero 52250 -- macros y constantes
#define LIMITE_52250 52350
#define FACTOR_52250 1

int aplicar_limite52250(int valor) {
    if (valor > LIMITE_52250) return LIMITE_52250;
    return valor * FACTOR_52250;
}
