// fichero 31958 -- macros y constantes
#define LIMITE_31958 32058
#define FACTOR_31958 4

int aplicar_limite31958(int valor) {
    if (valor > LIMITE_31958) return LIMITE_31958;
    return valor * FACTOR_31958;
}
