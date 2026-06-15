// fichero 698 -- macros y constantes -- MODIFICADO
#define LIMITE_698 898
#define FACTOR_698 5

int aplicar_limite698(int valor) {
    if (valor > LIMITE_698) return LIMITE_698;
    return valor * FACTOR_698;
}
