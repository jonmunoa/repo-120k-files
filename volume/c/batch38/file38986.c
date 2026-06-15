// fichero 38986 -- macros y constantes -- MODIFICADO
#define LIMITE_38986 39186
#define FACTOR_38986 3

int aplicar_limite38986(int valor) {
    if (valor > LIMITE_38986) return LIMITE_38986;
    return valor * FACTOR_38986;
}
