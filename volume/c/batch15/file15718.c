// fichero 15718 -- macros y constantes -- MODIFICADO
#define LIMITE_15718 15918
#define FACTOR_15718 5

int aplicar_limite15718(int valor) {
    if (valor > LIMITE_15718) return LIMITE_15718;
    return valor * FACTOR_15718;
}
