// fichero 13074 -- macros y constantes -- MODIFICADO
#define LIMITE_13074 13274
#define FACTOR_13074 6

int aplicar_limite13074(int valor) {
    if (valor > LIMITE_13074) return LIMITE_13074;
    return valor * FACTOR_13074;
}
