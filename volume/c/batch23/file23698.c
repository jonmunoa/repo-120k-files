// fichero 23698 -- macros y constantes -- MODIFICADO
#define LIMITE_23698 23898
#define FACTOR_23698 5

int aplicar_limite23698(int valor) {
    if (valor > LIMITE_23698) return LIMITE_23698;
    return valor * FACTOR_23698;
}
