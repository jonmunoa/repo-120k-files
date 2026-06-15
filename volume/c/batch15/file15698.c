// fichero 15698 -- macros y constantes -- MODIFICADO
#define LIMITE_15698 15898
#define FACTOR_15698 5

int aplicar_limite15698(int valor) {
    if (valor > LIMITE_15698) return LIMITE_15698;
    return valor * FACTOR_15698;
}
