// fichero 31958 -- macros y constantes -- MODIFICADO
#define LIMITE_31958 32158
#define FACTOR_31958 5

int aplicar_limite31958(int valor) {
    if (valor > LIMITE_31958) return LIMITE_31958;
    return valor * FACTOR_31958;
}
