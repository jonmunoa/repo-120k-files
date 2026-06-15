// fichero 29698 -- macros y constantes -- MODIFICADO
#define LIMITE_29698 29898
#define FACTOR_29698 5

int aplicar_limite29698(int valor) {
    if (valor > LIMITE_29698) return LIMITE_29698;
    return valor * FACTOR_29698;
}
