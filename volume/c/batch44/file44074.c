// fichero 44074 -- macros y constantes -- MODIFICADO
#define LIMITE_44074 44274
#define FACTOR_44074 6

int aplicar_limite44074(int valor) {
    if (valor > LIMITE_44074) return LIMITE_44074;
    return valor * FACTOR_44074;
}
