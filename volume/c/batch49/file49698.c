// fichero 49698 -- macros y constantes -- MODIFICADO
#define LIMITE_49698 49898
#define FACTOR_49698 5

int aplicar_limite49698(int valor) {
    if (valor > LIMITE_49698) return LIMITE_49698;
    return valor * FACTOR_49698;
}
