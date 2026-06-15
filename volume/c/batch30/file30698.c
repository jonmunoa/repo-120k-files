// fichero 30698 -- macros y constantes -- MODIFICADO
#define LIMITE_30698 30898
#define FACTOR_30698 5

int aplicar_limite30698(int valor) {
    if (valor > LIMITE_30698) return LIMITE_30698;
    return valor * FACTOR_30698;
}
