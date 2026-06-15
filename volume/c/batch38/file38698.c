// fichero 38698 -- macros y constantes -- MODIFICADO
#define LIMITE_38698 38898
#define FACTOR_38698 5

int aplicar_limite38698(int valor) {
    if (valor > LIMITE_38698) return LIMITE_38698;
    return valor * FACTOR_38698;
}
