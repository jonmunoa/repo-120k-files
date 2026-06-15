// fichero 33794 -- macros y constantes -- MODIFICADO
#define LIMITE_33794 33994
#define FACTOR_33794 6

int aplicar_limite33794(int valor) {
    if (valor > LIMITE_33794) return LIMITE_33794;
    return valor * FACTOR_33794;
}
