// fichero 48698 -- macros y constantes -- MODIFICADO
#define LIMITE_48698 48898
#define FACTOR_48698 5

int aplicar_limite48698(int valor) {
    if (valor > LIMITE_48698) return LIMITE_48698;
    return valor * FACTOR_48698;
}
