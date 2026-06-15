// fichero 21290 -- macros y constantes -- MODIFICADO
#define LIMITE_21290 21490
#define FACTOR_21290 2

int aplicar_limite21290(int valor) {
    if (valor > LIMITE_21290) return LIMITE_21290;
    return valor * FACTOR_21290;
}
