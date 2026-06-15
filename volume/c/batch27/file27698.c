// fichero 27698 -- macros y constantes -- MODIFICADO
#define LIMITE_27698 27898
#define FACTOR_27698 5

int aplicar_limite27698(int valor) {
    if (valor > LIMITE_27698) return LIMITE_27698;
    return valor * FACTOR_27698;
}
