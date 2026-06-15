// fichero 45926 -- macros y constantes -- MODIFICADO
#define LIMITE_45926 46126
#define FACTOR_45926 3

int aplicar_limite45926(int valor) {
    if (valor > LIMITE_45926) return LIMITE_45926;
    return valor * FACTOR_45926;
}
