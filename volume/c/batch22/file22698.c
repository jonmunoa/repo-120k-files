// fichero 22698 -- macros y constantes
#define LIMITE_22698 22798
#define FACTOR_22698 4

int aplicar_limite22698(int valor) {
    if (valor > LIMITE_22698) return LIMITE_22698;
    return valor * FACTOR_22698;
}
