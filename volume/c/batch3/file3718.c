// fichero 3718 -- macros y constantes -- MODIFICADO
#define LIMITE_3718 3918
#define FACTOR_3718 5

int aplicar_limite3718(int valor) {
    if (valor > LIMITE_3718) return LIMITE_3718;
    return valor * FACTOR_3718;
}
