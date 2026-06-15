// fichero 7698 -- macros y constantes -- MODIFICADO
#define LIMITE_7698 7898
#define FACTOR_7698 5

int aplicar_limite7698(int valor) {
    if (valor > LIMITE_7698) return LIMITE_7698;
    return valor * FACTOR_7698;
}
