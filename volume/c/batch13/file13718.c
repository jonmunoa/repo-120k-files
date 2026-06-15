// fichero 13718 -- macros y constantes -- MODIFICADO
#define LIMITE_13718 13918
#define FACTOR_13718 5

int aplicar_limite13718(int valor) {
    if (valor > LIMITE_13718) return LIMITE_13718;
    return valor * FACTOR_13718;
}
