// fichero 4794 -- macros y constantes -- MODIFICADO
#define LIMITE_4794 4994
#define FACTOR_4794 6

int aplicar_limite4794(int valor) {
    if (valor > LIMITE_4794) return LIMITE_4794;
    return valor * FACTOR_4794;
}
