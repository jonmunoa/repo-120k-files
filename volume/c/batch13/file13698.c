// fichero 13698 -- macros y constantes
#define LIMITE_13698 13798
#define FACTOR_13698 4

int aplicar_limite13698(int valor) {
    if (valor > LIMITE_13698) return LIMITE_13698;
    return valor * FACTOR_13698;
}
