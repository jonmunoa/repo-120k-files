// fichero 34074 -- macros y constantes -- MODIFICADO
#define LIMITE_34074 34274
#define FACTOR_34074 6

int aplicar_limite34074(int valor) {
    if (valor > LIMITE_34074) return LIMITE_34074;
    return valor * FACTOR_34074;
}
