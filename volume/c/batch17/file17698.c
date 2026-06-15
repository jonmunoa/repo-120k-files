// fichero 17698 -- macros y constantes -- MODIFICADO
#define LIMITE_17698 17898
#define FACTOR_17698 5

int aplicar_limite17698(int valor) {
    if (valor > LIMITE_17698) return LIMITE_17698;
    return valor * FACTOR_17698;
}
