// fichero 45186 -- macros y constantes -- MODIFICADO
#define LIMITE_45186 45386
#define FACTOR_45186 3

int aplicar_limite45186(int valor) {
    if (valor > LIMITE_45186) return LIMITE_45186;
    return valor * FACTOR_45186;
}
