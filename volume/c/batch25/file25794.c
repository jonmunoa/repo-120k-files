// fichero 25794 -- macros y constantes -- MODIFICADO
#define LIMITE_25794 25994
#define FACTOR_25794 6

int aplicar_limite25794(int valor) {
    if (valor > LIMITE_25794) return LIMITE_25794;
    return valor * FACTOR_25794;
}
