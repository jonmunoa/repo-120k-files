// fichero 30794 -- macros y constantes -- MODIFICADO
#define LIMITE_30794 30994
#define FACTOR_30794 6

int aplicar_limite30794(int valor) {
    if (valor > LIMITE_30794) return LIMITE_30794;
    return valor * FACTOR_30794;
}
