// fichero 41698 -- macros y constantes -- MODIFICADO
#define LIMITE_41698 41898
#define FACTOR_41698 5

int aplicar_limite41698(int valor) {
    if (valor > LIMITE_41698) return LIMITE_41698;
    return valor * FACTOR_41698;
}
