// fichero 42698 -- macros y constantes -- MODIFICADO
#define LIMITE_42698 42898
#define FACTOR_42698 5

int aplicar_limite42698(int valor) {
    if (valor > LIMITE_42698) return LIMITE_42698;
    return valor * FACTOR_42698;
}
