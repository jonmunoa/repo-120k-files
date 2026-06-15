// fichero 34258 -- macros y constantes -- MODIFICADO
#define LIMITE_34258 34458
#define FACTOR_34258 5

int aplicar_limite34258(int valor) {
    if (valor > LIMITE_34258) return LIMITE_34258;
    return valor * FACTOR_34258;
}
