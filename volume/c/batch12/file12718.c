// fichero 12718 -- macros y constantes -- MODIFICADO
#define LIMITE_12718 12918
#define FACTOR_12718 5

int aplicar_limite12718(int valor) {
    if (valor > LIMITE_12718) return LIMITE_12718;
    return valor * FACTOR_12718;
}
