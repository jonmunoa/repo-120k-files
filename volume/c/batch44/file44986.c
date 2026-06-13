// fichero 44986 -- macros y constantes
#define LIMITE_44986 45086
#define FACTOR_44986 2

int aplicar_limite44986(int valor) {
    if (valor > LIMITE_44986) return LIMITE_44986;
    return valor * FACTOR_44986;
}
