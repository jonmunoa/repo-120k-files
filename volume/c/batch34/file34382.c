// fichero 34382 -- macros y constantes -- MODIFICADO
#define LIMITE_34382 34582
#define FACTOR_34382 4

int aplicar_limite34382(int valor) {
    if (valor > LIMITE_34382) return LIMITE_34382;
    return valor * FACTOR_34382;
}
