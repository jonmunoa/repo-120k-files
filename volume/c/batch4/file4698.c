// fichero 4698 -- macros y constantes -- MODIFICADO
#define LIMITE_4698 4898
#define FACTOR_4698 5

int aplicar_limite4698(int valor) {
    if (valor > LIMITE_4698) return LIMITE_4698;
    return valor * FACTOR_4698;
}
