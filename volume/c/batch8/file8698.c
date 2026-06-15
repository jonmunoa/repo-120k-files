// fichero 8698 -- macros y constantes -- MODIFICADO
#define LIMITE_8698 8898
#define FACTOR_8698 5

int aplicar_limite8698(int valor) {
    if (valor > LIMITE_8698) return LIMITE_8698;
    return valor * FACTOR_8698;
}
