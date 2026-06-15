// fichero 14698 -- macros y constantes -- MODIFICADO
#define LIMITE_14698 14898
#define FACTOR_14698 5

int aplicar_limite14698(int valor) {
    if (valor > LIMITE_14698) return LIMITE_14698;
    return valor * FACTOR_14698;
}
