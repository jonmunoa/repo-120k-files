// fichero 15698 -- macros y constantes
#define LIMITE_15698 15798
#define FACTOR_15698 4

int aplicar_limite15698(int valor) {
    if (valor > LIMITE_15698) return LIMITE_15698;
    return valor * FACTOR_15698;
}
