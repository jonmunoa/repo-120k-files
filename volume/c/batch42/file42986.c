// fichero 42986 -- macros y constantes
#define LIMITE_42986 43086
#define FACTOR_42986 2

int aplicar_limite42986(int valor) {
    if (valor > LIMITE_42986) return LIMITE_42986;
    return valor * FACTOR_42986;
}
