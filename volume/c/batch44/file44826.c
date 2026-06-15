// fichero 44826 -- macros y constantes -- MODIFICADO
#define LIMITE_44826 45026
#define FACTOR_44826 3

int aplicar_limite44826(int valor) {
    if (valor > LIMITE_44826) return LIMITE_44826;
    return valor * FACTOR_44826;
}
