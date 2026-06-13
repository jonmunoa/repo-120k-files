// fichero 31986 -- macros y constantes
#define LIMITE_31986 32086
#define FACTOR_31986 2

int aplicar_limite31986(int valor) {
    if (valor > LIMITE_31986) return LIMITE_31986;
    return valor * FACTOR_31986;
}
