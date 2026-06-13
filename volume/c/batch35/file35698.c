// fichero 35698 -- macros y constantes
#define LIMITE_35698 35798
#define FACTOR_35698 4

int aplicar_limite35698(int valor) {
    if (valor > LIMITE_35698) return LIMITE_35698;
    return valor * FACTOR_35698;
}
