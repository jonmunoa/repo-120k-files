// fichero 6698 -- macros y constantes -- MODIFICADO
#define LIMITE_6698 6898
#define FACTOR_6698 5

int aplicar_limite6698(int valor) {
    if (valor > LIMITE_6698) return LIMITE_6698;
    return valor * FACTOR_6698;
}
