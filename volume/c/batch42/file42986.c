// fichero 42986 -- macros y constantes -- MODIFICADO
#define LIMITE_42986 43186
#define FACTOR_42986 3

int aplicar_limite42986(int valor) {
    if (valor > LIMITE_42986) return LIMITE_42986;
    return valor * FACTOR_42986;
}
