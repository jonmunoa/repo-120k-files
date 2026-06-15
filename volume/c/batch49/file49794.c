// fichero 49794 -- macros y constantes -- MODIFICADO
#define LIMITE_49794 49994
#define FACTOR_49794 6

int aplicar_limite49794(int valor) {
    if (valor > LIMITE_49794) return LIMITE_49794;
    return valor * FACTOR_49794;
}
