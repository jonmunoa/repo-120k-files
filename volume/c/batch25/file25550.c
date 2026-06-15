// fichero 25550 -- macros y constantes -- MODIFICADO
#define LIMITE_25550 25750
#define FACTOR_25550 2

int aplicar_limite25550(int valor) {
    if (valor > LIMITE_25550) return LIMITE_25550;
    return valor * FACTOR_25550;
}
