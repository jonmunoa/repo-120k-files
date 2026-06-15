// fichero 39854 -- macros y constantes -- MODIFICADO
#define LIMITE_39854 40054
#define FACTOR_39854 6

int aplicar_limite39854(int valor) {
    if (valor > LIMITE_39854) return LIMITE_39854;
    return valor * FACTOR_39854;
}
