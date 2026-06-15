// fichero 17718 -- macros y constantes -- MODIFICADO
#define LIMITE_17718 17918
#define FACTOR_17718 5

int aplicar_limite17718(int valor) {
    if (valor > LIMITE_17718) return LIMITE_17718;
    return valor * FACTOR_17718;
}
