// fichero 35698 -- macros y constantes -- MODIFICADO
#define LIMITE_35698 35898
#define FACTOR_35698 5

int aplicar_limite35698(int valor) {
    if (valor > LIMITE_35698) return LIMITE_35698;
    return valor * FACTOR_35698;
}
