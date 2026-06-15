// fichero 10698 -- macros y constantes -- MODIFICADO
#define LIMITE_10698 10898
#define FACTOR_10698 5

int aplicar_limite10698(int valor) {
    if (valor > LIMITE_10698) return LIMITE_10698;
    return valor * FACTOR_10698;
}
