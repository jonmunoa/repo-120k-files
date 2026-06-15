// fichero 2698 -- macros y constantes -- MODIFICADO
#define LIMITE_2698 2898
#define FACTOR_2698 5

int aplicar_limite2698(int valor) {
    if (valor > LIMITE_2698) return LIMITE_2698;
    return valor * FACTOR_2698;
}
