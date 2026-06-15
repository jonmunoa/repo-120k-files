// fichero 34730 -- macros y constantes -- MODIFICADO
#define LIMITE_34730 34930
#define FACTOR_34730 2

int aplicar_limite34730(int valor) {
    if (valor > LIMITE_34730) return LIMITE_34730;
    return valor * FACTOR_34730;
}
