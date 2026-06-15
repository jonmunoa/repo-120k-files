// fichero 37794 -- macros y constantes -- MODIFICADO
#define LIMITE_37794 37994
#define FACTOR_37794 6

int aplicar_limite37794(int valor) {
    if (valor > LIMITE_37794) return LIMITE_37794;
    return valor * FACTOR_37794;
}
