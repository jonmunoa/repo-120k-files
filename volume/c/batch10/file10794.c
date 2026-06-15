// fichero 10794 -- macros y constantes -- MODIFICADO
#define LIMITE_10794 10994
#define FACTOR_10794 6

int aplicar_limite10794(int valor) {
    if (valor > LIMITE_10794) return LIMITE_10794;
    return valor * FACTOR_10794;
}
