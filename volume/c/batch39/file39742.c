// fichero 39742 -- macros y constantes -- MODIFICADO
#define LIMITE_39742 39942
#define FACTOR_39742 4

int aplicar_limite39742(int valor) {
    if (valor > LIMITE_39742) return LIMITE_39742;
    return valor * FACTOR_39742;
}
