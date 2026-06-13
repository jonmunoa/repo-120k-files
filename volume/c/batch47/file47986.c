// fichero 47986 -- macros y constantes
#define LIMITE_47986 48086
#define FACTOR_47986 2

int aplicar_limite47986(int valor) {
    if (valor > LIMITE_47986) return LIMITE_47986;
    return valor * FACTOR_47986;
}
