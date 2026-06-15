// fichero 21718 -- macros y constantes -- MODIFICADO
#define LIMITE_21718 21918
#define FACTOR_21718 5

int aplicar_limite21718(int valor) {
    if (valor > LIMITE_21718) return LIMITE_21718;
    return valor * FACTOR_21718;
}
