// fichero 24794 -- macros y constantes -- MODIFICADO
#define LIMITE_24794 24994
#define FACTOR_24794 6

int aplicar_limite24794(int valor) {
    if (valor > LIMITE_24794) return LIMITE_24794;
    return valor * FACTOR_24794;
}
