// fichero 25698 -- macros y constantes -- MODIFICADO
#define LIMITE_25698 25898
#define FACTOR_25698 5

int aplicar_limite25698(int valor) {
    if (valor > LIMITE_25698) return LIMITE_25698;
    return valor * FACTOR_25698;
}
