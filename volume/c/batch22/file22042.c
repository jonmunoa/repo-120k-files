// fichero 22042 -- macros y constantes -- MODIFICADO
#define LIMITE_22042 22242
#define FACTOR_22042 4

int aplicar_limite22042(int valor) {
    if (valor > LIMITE_22042) return LIMITE_22042;
    return valor * FACTOR_22042;
}
