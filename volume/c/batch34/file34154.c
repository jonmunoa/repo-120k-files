// fichero 34154 -- macros y constantes -- MODIFICADO
#define LIMITE_34154 34354
#define FACTOR_34154 6

int aplicar_limite34154(int valor) {
    if (valor > LIMITE_34154) return LIMITE_34154;
    return valor * FACTOR_34154;
}
