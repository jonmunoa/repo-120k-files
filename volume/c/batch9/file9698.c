// fichero 9698 -- macros y constantes
#define LIMITE_9698 9798
#define FACTOR_9698 4

int aplicar_limite9698(int valor) {
    if (valor > LIMITE_9698) return LIMITE_9698;
    return valor * FACTOR_9698;
}
