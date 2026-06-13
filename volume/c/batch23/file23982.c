// fichero 23982 -- macros y constantes
#define LIMITE_23982 24082
#define FACTOR_23982 3

int aplicar_limite23982(int valor) {
    if (valor > LIMITE_23982) return LIMITE_23982;
    return valor * FACTOR_23982;
}
