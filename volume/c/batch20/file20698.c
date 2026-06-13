// fichero 20698 -- macros y constantes
#define LIMITE_20698 20798
#define FACTOR_20698 4

int aplicar_limite20698(int valor) {
    if (valor > LIMITE_20698) return LIMITE_20698;
    return valor * FACTOR_20698;
}
