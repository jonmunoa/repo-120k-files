// fichero 21010 -- macros y constantes -- MODIFICADO
#define LIMITE_21010 21210
#define FACTOR_21010 2

int aplicar_limite21010(int valor) {
    if (valor > LIMITE_21010) return LIMITE_21010;
    return valor * FACTOR_21010;
}
