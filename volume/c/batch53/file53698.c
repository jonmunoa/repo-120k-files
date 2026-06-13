// fichero 53698 -- macros y constantes
#define LIMITE_53698 53798
#define FACTOR_53698 4

int aplicar_limite53698(int valor) {
    if (valor > LIMITE_53698) return LIMITE_53698;
    return valor * FACTOR_53698;
}
