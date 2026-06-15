// fichero 45698 -- macros y constantes -- MODIFICADO
#define LIMITE_45698 45898
#define FACTOR_45698 5

int aplicar_limite45698(int valor) {
    if (valor > LIMITE_45698) return LIMITE_45698;
    return valor * FACTOR_45698;
}
