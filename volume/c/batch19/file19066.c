// fichero 19066 -- macros y constantes -- MODIFICADO
#define LIMITE_19066 19266
#define FACTOR_19066 3

int aplicar_limite19066(int valor) {
    if (valor > LIMITE_19066) return LIMITE_19066;
    return valor * FACTOR_19066;
}
