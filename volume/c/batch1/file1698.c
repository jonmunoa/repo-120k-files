// fichero 1698 -- macros y constantes -- MODIFICADO
#define LIMITE_1698 1898
#define FACTOR_1698 5

int aplicar_limite1698(int valor) {
    if (valor > LIMITE_1698) return LIMITE_1698;
    return valor * FACTOR_1698;
}
