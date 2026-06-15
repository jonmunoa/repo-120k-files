// fichero 37926 -- macros y constantes -- MODIFICADO
#define LIMITE_37926 38126
#define FACTOR_37926 3

int aplicar_limite37926(int valor) {
    if (valor > LIMITE_37926) return LIMITE_37926;
    return valor * FACTOR_37926;
}
