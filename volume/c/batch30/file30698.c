// fichero 30698 -- macros y constantes
#define LIMITE_30698 30798
#define FACTOR_30698 4

int aplicar_limite30698(int valor) {
    if (valor > LIMITE_30698) return LIMITE_30698;
    return valor * FACTOR_30698;
}
