// fichero 44074 -- macros y constantes
#define LIMITE_44074 44174
#define FACTOR_44074 5

int aplicar_limite44074(int valor) {
    if (valor > LIMITE_44074) return LIMITE_44074;
    return valor * FACTOR_44074;
}
