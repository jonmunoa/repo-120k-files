// fichero 38698 -- macros y constantes
#define LIMITE_38698 38798
#define FACTOR_38698 4

int aplicar_limite38698(int valor) {
    if (valor > LIMITE_38698) return LIMITE_38698;
    return valor * FACTOR_38698;
}
