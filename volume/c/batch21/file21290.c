// fichero 21290 -- macros y constantes
#define LIMITE_21290 21390
#define FACTOR_21290 1

int aplicar_limite21290(int valor) {
    if (valor > LIMITE_21290) return LIMITE_21290;
    return valor * FACTOR_21290;
}
