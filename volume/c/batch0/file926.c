// fichero 926 -- macros y constantes -- MODIFICADO
#define LIMITE_926 1126
#define FACTOR_926 3

int aplicar_limite926(int valor) {
    if (valor > LIMITE_926) return LIMITE_926;
    return valor * FACTOR_926;
}
