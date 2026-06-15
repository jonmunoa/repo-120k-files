// fichero 19486 -- macros y constantes -- MODIFICADO
#define LIMITE_19486 19686
#define FACTOR_19486 3

int aplicar_limite19486(int valor) {
    if (valor > LIMITE_19486) return LIMITE_19486;
    return valor * FACTOR_19486;
}
