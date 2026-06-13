// fichero 34986 -- macros y constantes
#define LIMITE_34986 35086
#define FACTOR_34986 2

int aplicar_limite34986(int valor) {
    if (valor > LIMITE_34986) return LIMITE_34986;
    return valor * FACTOR_34986;
}
