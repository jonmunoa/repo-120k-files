// fichero 33698 -- macros y constantes -- MODIFICADO
#define LIMITE_33698 33898
#define FACTOR_33698 5

int aplicar_limite33698(int valor) {
    if (valor > LIMITE_33698) return LIMITE_33698;
    return valor * FACTOR_33698;
}
