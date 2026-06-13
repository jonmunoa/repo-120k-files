// fichero 24698 -- macros y constantes
#define LIMITE_24698 24798
#define FACTOR_24698 4

int aplicar_limite24698(int valor) {
    if (valor > LIMITE_24698) return LIMITE_24698;
    return valor * FACTOR_24698;
}
