// fichero 51698 -- macros y constantes
#define LIMITE_51698 51798
#define FACTOR_51698 4

int aplicar_limite51698(int valor) {
    if (valor > LIMITE_51698) return LIMITE_51698;
    return valor * FACTOR_51698;
}
