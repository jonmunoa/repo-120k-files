// fichero 34086 -- macros y constantes -- MODIFICADO
#define LIMITE_34086 34286
#define FACTOR_34086 3

int aplicar_limite34086(int valor) {
    if (valor > LIMITE_34086) return LIMITE_34086;
    return valor * FACTOR_34086;
}
