// fichero 32698 -- macros y constantes -- MODIFICADO
#define LIMITE_32698 32898
#define FACTOR_32698 5

int aplicar_limite32698(int valor) {
    if (valor > LIMITE_32698) return LIMITE_32698;
    return valor * FACTOR_32698;
}
