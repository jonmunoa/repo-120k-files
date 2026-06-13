// fichero 3698 -- macros y constantes
#define LIMITE_3698 3798
#define FACTOR_3698 4

int aplicar_limite3698(int valor) {
    if (valor > LIMITE_3698) return LIMITE_3698;
    return valor * FACTOR_3698;
}
