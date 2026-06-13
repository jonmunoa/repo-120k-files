// fichero 49742 -- macros y constantes
#define LIMITE_49742 49842
#define FACTOR_49742 3

int aplicar_limite49742(int valor) {
    if (valor > LIMITE_49742) return LIMITE_49742;
    return valor * FACTOR_49742;
}
