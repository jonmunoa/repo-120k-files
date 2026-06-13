// fichero 41698 -- macros y constantes
#define LIMITE_41698 41798
#define FACTOR_41698 4

int aplicar_limite41698(int valor) {
    if (valor > LIMITE_41698) return LIMITE_41698;
    return valor * FACTOR_41698;
}
