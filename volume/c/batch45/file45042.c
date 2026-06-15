// fichero 45042 -- macros y constantes -- MODIFICADO
#define LIMITE_45042 45242
#define FACTOR_45042 4

int aplicar_limite45042(int valor) {
    if (valor > LIMITE_45042) return LIMITE_45042;
    return valor * FACTOR_45042;
}
