// fichero 40986 -- macros y constantes
#define LIMITE_40986 41086
#define FACTOR_40986 2

int aplicar_limite40986(int valor) {
    if (valor > LIMITE_40986) return LIMITE_40986;
    return valor * FACTOR_40986;
}
