// fichero 28698 -- macros y constantes -- MODIFICADO
#define LIMITE_28698 28898
#define FACTOR_28698 5

int aplicar_limite28698(int valor) {
    if (valor > LIMITE_28698) return LIMITE_28698;
    return valor * FACTOR_28698;
}
