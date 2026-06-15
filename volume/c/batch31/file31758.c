// fichero 31758 -- macros y constantes -- MODIFICADO
#define LIMITE_31758 31958
#define FACTOR_31758 5

int aplicar_limite31758(int valor) {
    if (valor > LIMITE_31758) return LIMITE_31758;
    return valor * FACTOR_31758;
}
