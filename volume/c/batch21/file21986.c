// fichero 21986 -- macros y constantes
#define LIMITE_21986 22086
#define FACTOR_21986 2

int aplicar_limite21986(int valor) {
    if (valor > LIMITE_21986) return LIMITE_21986;
    return valor * FACTOR_21986;
}
