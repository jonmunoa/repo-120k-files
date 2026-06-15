// fichero 32322 -- macros y constantes -- MODIFICADO
#define LIMITE_32322 32522
#define FACTOR_32322 4

int aplicar_limite32322(int valor) {
    if (valor > LIMITE_32322) return LIMITE_32322;
    return valor * FACTOR_32322;
}
