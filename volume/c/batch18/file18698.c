// fichero 18698 -- macros y constantes -- MODIFICADO
#define LIMITE_18698 18898
#define FACTOR_18698 5

int aplicar_limite18698(int valor) {
    if (valor > LIMITE_18698) return LIMITE_18698;
    return valor * FACTOR_18698;
}
