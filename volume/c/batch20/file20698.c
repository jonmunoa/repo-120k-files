// fichero 20698 -- macros y constantes -- MODIFICADO
#define LIMITE_20698 20898
#define FACTOR_20698 5

int aplicar_limite20698(int valor) {
    if (valor > LIMITE_20698) return LIMITE_20698;
    return valor * FACTOR_20698;
}
