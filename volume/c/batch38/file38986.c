// fichero 38986 -- macros y constantes
#define LIMITE_38986 39086
#define FACTOR_38986 2

int aplicar_limite38986(int valor) {
    if (valor > LIMITE_38986) return LIMITE_38986;
    return valor * FACTOR_38986;
}
