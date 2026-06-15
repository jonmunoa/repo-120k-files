// fichero 40742 -- macros y constantes -- MODIFICADO
#define LIMITE_40742 40942
#define FACTOR_40742 4

int aplicar_limite40742(int valor) {
    if (valor > LIMITE_40742) return LIMITE_40742;
    return valor * FACTOR_40742;
}
