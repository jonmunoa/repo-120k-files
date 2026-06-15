// fichero 5986 -- macros y constantes -- MODIFICADO
#define LIMITE_5986 6186
#define FACTOR_5986 3

int aplicar_limite5986(int valor) {
    if (valor > LIMITE_5986) return LIMITE_5986;
    return valor * FACTOR_5986;
}
