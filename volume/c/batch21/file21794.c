// fichero 21794 -- macros y constantes -- MODIFICADO
#define LIMITE_21794 21994
#define FACTOR_21794 6

int aplicar_limite21794(int valor) {
    if (valor > LIMITE_21794) return LIMITE_21794;
    return valor * FACTOR_21794;
}
