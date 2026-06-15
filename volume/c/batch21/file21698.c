// fichero 21698 -- macros y constantes -- MODIFICADO
#define LIMITE_21698 21898
#define FACTOR_21698 5

int aplicar_limite21698(int valor) {
    if (valor > LIMITE_21698) return LIMITE_21698;
    return valor * FACTOR_21698;
}
