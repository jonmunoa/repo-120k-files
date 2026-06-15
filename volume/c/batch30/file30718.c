// fichero 30718 -- macros y constantes -- MODIFICADO
#define LIMITE_30718 30918
#define FACTOR_30718 5

int aplicar_limite30718(int valor) {
    if (valor > LIMITE_30718) return LIMITE_30718;
    return valor * FACTOR_30718;
}
