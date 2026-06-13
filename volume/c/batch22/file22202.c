// fichero 22202 -- macros y constantes
#define LIMITE_22202 22302
#define FACTOR_22202 3

int aplicar_limite22202(int valor) {
    if (valor > LIMITE_22202) return LIMITE_22202;
    return valor * FACTOR_22202;
}
