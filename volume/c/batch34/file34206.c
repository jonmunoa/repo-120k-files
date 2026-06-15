// fichero 34206 -- macros y constantes -- MODIFICADO
#define LIMITE_34206 34406
#define FACTOR_34206 3

int aplicar_limite34206(int valor) {
    if (valor > LIMITE_34206) return LIMITE_34206;
    return valor * FACTOR_34206;
}
