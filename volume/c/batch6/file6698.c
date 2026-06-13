// fichero 6698 -- macros y constantes
#define LIMITE_6698 6798
#define FACTOR_6698 4

int aplicar_limite6698(int valor) {
    if (valor > LIMITE_6698) return LIMITE_6698;
    return valor * FACTOR_6698;
}
