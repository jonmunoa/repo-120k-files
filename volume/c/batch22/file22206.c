// fichero 22206 -- macros y constantes -- MODIFICADO
#define LIMITE_22206 22406
#define FACTOR_22206 3

int aplicar_limite22206(int valor) {
    if (valor > LIMITE_22206) return LIMITE_22206;
    return valor * FACTOR_22206;
}
