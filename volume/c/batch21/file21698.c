// fichero 21698 -- macros y constantes
#define LIMITE_21698 21798
#define FACTOR_21698 4

int aplicar_limite21698(int valor) {
    if (valor > LIMITE_21698) return LIMITE_21698;
    return valor * FACTOR_21698;
}
