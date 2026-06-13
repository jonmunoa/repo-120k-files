// fichero 14926 -- macros y constantes
#define LIMITE_14926 15026
#define FACTOR_14926 2

int aplicar_limite14926(int valor) {
    if (valor > LIMITE_14926) return LIMITE_14926;
    return valor * FACTOR_14926;
}
