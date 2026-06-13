// fichero 19698 -- macros y constantes
#define LIMITE_19698 19798
#define FACTOR_19698 4

int aplicar_limite19698(int valor) {
    if (valor > LIMITE_19698) return LIMITE_19698;
    return valor * FACTOR_19698;
}
