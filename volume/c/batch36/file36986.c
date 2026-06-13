// fichero 36986 -- macros y constantes
#define LIMITE_36986 37086
#define FACTOR_36986 2

int aplicar_limite36986(int valor) {
    if (valor > LIMITE_36986) return LIMITE_36986;
    return valor * FACTOR_36986;
}
