// fichero 16226 -- macros y constantes -- MODIFICADO
#define LIMITE_16226 16426
#define FACTOR_16226 3

int aplicar_limite16226(int valor) {
    if (valor > LIMITE_16226) return LIMITE_16226;
    return valor * FACTOR_16226;
}
