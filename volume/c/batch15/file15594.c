// fichero 15594 -- macros y constantes -- MODIFICADO
#define LIMITE_15594 15794
#define FACTOR_15594 6

int aplicar_limite15594(int valor) {
    if (valor > LIMITE_15594) return LIMITE_15594;
    return valor * FACTOR_15594;
}
