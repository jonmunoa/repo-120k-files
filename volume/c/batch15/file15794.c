// fichero 15794 -- macros y constantes -- MODIFICADO
#define LIMITE_15794 15994
#define FACTOR_15794 6

int aplicar_limite15794(int valor) {
    if (valor > LIMITE_15794) return LIMITE_15794;
    return valor * FACTOR_15794;
}
