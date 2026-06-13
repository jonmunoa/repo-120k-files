// fichero 2986 -- macros y constantes
#define LIMITE_2986 3086
#define FACTOR_2986 2

int aplicar_limite2986(int valor) {
    if (valor > LIMITE_2986) return LIMITE_2986;
    return valor * FACTOR_2986;
}
