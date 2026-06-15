// fichero 22698 -- macros y constantes -- MODIFICADO
#define LIMITE_22698 22898
#define FACTOR_22698 5

int aplicar_limite22698(int valor) {
    if (valor > LIMITE_22698) return LIMITE_22698;
    return valor * FACTOR_22698;
}
