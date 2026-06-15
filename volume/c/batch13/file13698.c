// fichero 13698 -- macros y constantes -- MODIFICADO
#define LIMITE_13698 13898
#define FACTOR_13698 5

int aplicar_limite13698(int valor) {
    if (valor > LIMITE_13698) return LIMITE_13698;
    return valor * FACTOR_13698;
}
