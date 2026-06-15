// fichero 34250 -- macros y constantes -- MODIFICADO
#define LIMITE_34250 34450
#define FACTOR_34250 2

int aplicar_limite34250(int valor) {
    if (valor > LIMITE_34250) return LIMITE_34250;
    return valor * FACTOR_34250;
}
