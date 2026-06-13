// fichero 44826 -- macros y constantes
#define LIMITE_44826 44926
#define FACTOR_44826 2

int aplicar_limite44826(int valor) {
    if (valor > LIMITE_44826) return LIMITE_44826;
    return valor * FACTOR_44826;
}
