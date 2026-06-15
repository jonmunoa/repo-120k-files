// fichero 45854 -- macros y constantes -- MODIFICADO
#define LIMITE_45854 46054
#define FACTOR_45854 6

int aplicar_limite45854(int valor) {
    if (valor > LIMITE_45854) return LIMITE_45854;
    return valor * FACTOR_45854;
}
