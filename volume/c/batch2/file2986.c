// fichero 2986 -- macros y constantes -- MODIFICADO
#define LIMITE_2986 3186
#define FACTOR_2986 3

int aplicar_limite2986(int valor) {
    if (valor > LIMITE_2986) return LIMITE_2986;
    return valor * FACTOR_2986;
}
