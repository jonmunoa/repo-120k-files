// fichero 6762 -- macros y constantes -- MODIFICADO
#define LIMITE_6762 6962
#define FACTOR_6762 4

int aplicar_limite6762(int valor) {
    if (valor > LIMITE_6762) return LIMITE_6762;
    return valor * FACTOR_6762;
}
