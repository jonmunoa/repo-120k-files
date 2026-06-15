// fichero 25814 -- macros y constantes -- MODIFICADO
#define LIMITE_25814 26014
#define FACTOR_25814 6

int aplicar_limite25814(int valor) {
    if (valor > LIMITE_25814) return LIMITE_25814;
    return valor * FACTOR_25814;
}
