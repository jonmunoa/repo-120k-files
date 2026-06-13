// fichero 52566 -- macros y constantes
#define LIMITE_52566 52666
#define FACTOR_52566 2

int aplicar_limite52566(int valor) {
    if (valor > LIMITE_52566) return LIMITE_52566;
    return valor * FACTOR_52566;
}
