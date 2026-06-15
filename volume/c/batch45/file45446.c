// fichero 45446 -- macros y constantes -- MODIFICADO
#define LIMITE_45446 45646
#define FACTOR_45446 3

int aplicar_limite45446(int valor) {
    if (valor > LIMITE_45446) return LIMITE_45446;
    return valor * FACTOR_45446;
}
