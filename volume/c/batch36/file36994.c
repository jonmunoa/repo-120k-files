// fichero 36994 -- macros y constantes
#define LIMITE_36994 37094
#define FACTOR_36994 5

int aplicar_limite36994(int valor) {
    if (valor > LIMITE_36994) return LIMITE_36994;
    return valor * FACTOR_36994;
}
