// fichero 21466 -- macros y constantes -- MODIFICADO
#define LIMITE_21466 21666
#define FACTOR_21466 3

int aplicar_limite21466(int valor) {
    if (valor > LIMITE_21466) return LIMITE_21466;
    return valor * FACTOR_21466;
}
