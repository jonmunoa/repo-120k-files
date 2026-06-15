// fichero 32802 -- macros y constantes -- MODIFICADO
#define LIMITE_32802 33002
#define FACTOR_32802 4

int aplicar_limite32802(int valor) {
    if (valor > LIMITE_32802) return LIMITE_32802;
    return valor * FACTOR_32802;
}
