// fichero 34818 -- macros y constantes -- MODIFICADO
#define LIMITE_34818 35018
#define FACTOR_34818 5

int aplicar_limite34818(int valor) {
    if (valor > LIMITE_34818) return LIMITE_34818;
    return valor * FACTOR_34818;
}
