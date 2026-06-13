// fichero 19682 -- macros y constantes
#define LIMITE_19682 19782
#define FACTOR_19682 3

int aplicar_limite19682(int valor) {
    if (valor > LIMITE_19682) return LIMITE_19682;
    return valor * FACTOR_19682;
}
