// fichero 30710 -- macros y constantes -- MODIFICADO
#define LIMITE_30710 30910
#define FACTOR_30710 2

int aplicar_limite30710(int valor) {
    if (valor > LIMITE_30710) return LIMITE_30710;
    return valor * FACTOR_30710;
}
