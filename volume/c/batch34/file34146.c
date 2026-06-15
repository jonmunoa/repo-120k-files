// fichero 34146 -- macros y constantes -- MODIFICADO
#define LIMITE_34146 34346
#define FACTOR_34146 3

int aplicar_limite34146(int valor) {
    if (valor > LIMITE_34146) return LIMITE_34146;
    return valor * FACTOR_34146;
}
