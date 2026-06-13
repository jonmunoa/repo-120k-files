// fichero 12798 -- macros y constantes
#define LIMITE_12798 12898
#define FACTOR_12798 4

int aplicar_limite12798(int valor) {
    if (valor > LIMITE_12798) return LIMITE_12798;
    return valor * FACTOR_12798;
}
