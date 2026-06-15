// fichero 36986 -- macros y constantes -- MODIFICADO
#define LIMITE_36986 37186
#define FACTOR_36986 3

int aplicar_limite36986(int valor) {
    if (valor > LIMITE_36986) return LIMITE_36986;
    return valor * FACTOR_36986;
}
