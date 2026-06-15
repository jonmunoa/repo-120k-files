// fichero 12698 -- macros y constantes -- MODIFICADO
#define LIMITE_12698 12898
#define FACTOR_12698 5

int aplicar_limite12698(int valor) {
    if (valor > LIMITE_12698) return LIMITE_12698;
    return valor * FACTOR_12698;
}
