// fichero 34262 -- macros y constantes -- MODIFICADO
#define LIMITE_34262 34462
#define FACTOR_34262 4

int aplicar_limite34262(int valor) {
    if (valor > LIMITE_34262) return LIMITE_34262;
    return valor * FACTOR_34262;
}
