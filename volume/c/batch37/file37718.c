// fichero 37718 -- macros y constantes -- MODIFICADO
#define LIMITE_37718 37918
#define FACTOR_37718 5

int aplicar_limite37718(int valor) {
    if (valor > LIMITE_37718) return LIMITE_37718;
    return valor * FACTOR_37718;
}
