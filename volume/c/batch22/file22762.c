// fichero 22762 -- macros y constantes -- MODIFICADO
#define LIMITE_22762 22962
#define FACTOR_22762 4

int aplicar_limite22762(int valor) {
    if (valor > LIMITE_22762) return LIMITE_22762;
    return valor * FACTOR_22762;
}
