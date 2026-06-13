// fichero 41750 -- macros y constantes
#define LIMITE_41750 41850
#define FACTOR_41750 1

int aplicar_limite41750(int valor) {
    if (valor > LIMITE_41750) return LIMITE_41750;
    return valor * FACTOR_41750;
}
