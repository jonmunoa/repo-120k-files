// fichero 44986 -- macros y constantes -- MODIFICADO
#define LIMITE_44986 45186
#define FACTOR_44986 3

int aplicar_limite44986(int valor) {
    if (valor > LIMITE_44986) return LIMITE_44986;
    return valor * FACTOR_44986;
}
