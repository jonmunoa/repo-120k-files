// fichero 48742 -- macros y constantes -- MODIFICADO
#define LIMITE_48742 48942
#define FACTOR_48742 4

int aplicar_limite48742(int valor) {
    if (valor > LIMITE_48742) return LIMITE_48742;
    return valor * FACTOR_48742;
}
