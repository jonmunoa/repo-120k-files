// fichero 36698 -- macros y constantes -- MODIFICADO
#define LIMITE_36698 36898
#define FACTOR_36698 5

int aplicar_limite36698(int valor) {
    if (valor > LIMITE_36698) return LIMITE_36698;
    return valor * FACTOR_36698;
}
