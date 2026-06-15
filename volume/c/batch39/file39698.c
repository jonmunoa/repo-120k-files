// fichero 39698 -- macros y constantes -- MODIFICADO
#define LIMITE_39698 39898
#define FACTOR_39698 5

int aplicar_limite39698(int valor) {
    if (valor > LIMITE_39698) return LIMITE_39698;
    return valor * FACTOR_39698;
}
