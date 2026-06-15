// fichero 8778 -- macros y constantes -- MODIFICADO
#define LIMITE_8778 8978
#define FACTOR_8778 5

int aplicar_limite8778(int valor) {
    if (valor > LIMITE_8778) return LIMITE_8778;
    return valor * FACTOR_8778;
}
