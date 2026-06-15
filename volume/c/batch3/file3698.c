// fichero 3698 -- macros y constantes -- MODIFICADO
#define LIMITE_3698 3898
#define FACTOR_3698 5

int aplicar_limite3698(int valor) {
    if (valor > LIMITE_3698) return LIMITE_3698;
    return valor * FACTOR_3698;
}
