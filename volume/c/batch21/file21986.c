// fichero 21986 -- macros y constantes -- MODIFICADO
#define LIMITE_21986 22186
#define FACTOR_21986 3

int aplicar_limite21986(int valor) {
    if (valor > LIMITE_21986) return LIMITE_21986;
    return valor * FACTOR_21986;
}
