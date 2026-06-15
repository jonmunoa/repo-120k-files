// fichero 24114 -- macros y constantes -- MODIFICADO
#define LIMITE_24114 24314
#define FACTOR_24114 6

int aplicar_limite24114(int valor) {
    if (valor > LIMITE_24114) return LIMITE_24114;
    return valor * FACTOR_24114;
}
