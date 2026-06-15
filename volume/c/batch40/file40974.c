// fichero 40974 -- macros y constantes -- MODIFICADO
#define LIMITE_40974 41174
#define FACTOR_40974 6

int aplicar_limite40974(int valor) {
    if (valor > LIMITE_40974) return LIMITE_40974;
    return valor * FACTOR_40974;
}
