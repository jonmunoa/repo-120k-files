// fichero 20986 -- macros y constantes
#define LIMITE_20986 21086
#define FACTOR_20986 2

int aplicar_limite20986(int valor) {
    if (valor > LIMITE_20986) return LIMITE_20986;
    return valor * FACTOR_20986;
}
