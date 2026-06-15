// fichero 34982 -- macros y constantes -- MODIFICADO
#define LIMITE_34982 35182
#define FACTOR_34982 4

int aplicar_limite34982(int valor) {
    if (valor > LIMITE_34982) return LIMITE_34982;
    return valor * FACTOR_34982;
}
