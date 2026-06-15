// fichero 34018 -- macros y constantes -- MODIFICADO
#define LIMITE_34018 34218
#define FACTOR_34018 5

int aplicar_limite34018(int valor) {
    if (valor > LIMITE_34018) return LIMITE_34018;
    return valor * FACTOR_34018;
}
