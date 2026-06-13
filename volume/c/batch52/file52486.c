// fichero 52486 -- macros y constantes
#define LIMITE_52486 52586
#define FACTOR_52486 2

int aplicar_limite52486(int valor) {
    if (valor > LIMITE_52486) return LIMITE_52486;
    return valor * FACTOR_52486;
}
