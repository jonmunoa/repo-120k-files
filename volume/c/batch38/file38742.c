// fichero 38742 -- macros y constantes -- MODIFICADO
#define LIMITE_38742 38942
#define FACTOR_38742 4

int aplicar_limite38742(int valor) {
    if (valor > LIMITE_38742) return LIMITE_38742;
    return valor * FACTOR_38742;
}
