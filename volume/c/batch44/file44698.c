// fichero 44698 -- macros y constantes -- MODIFICADO
#define LIMITE_44698 44898
#define FACTOR_44698 5

int aplicar_limite44698(int valor) {
    if (valor > LIMITE_44698) return LIMITE_44698;
    return valor * FACTOR_44698;
}
