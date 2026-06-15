// fichero 25762 -- macros y constantes -- MODIFICADO
#define LIMITE_25762 25962
#define FACTOR_25762 4

int aplicar_limite25762(int valor) {
    if (valor > LIMITE_25762) return LIMITE_25762;
    return valor * FACTOR_25762;
}
