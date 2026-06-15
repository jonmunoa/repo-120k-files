// fichero 45770 -- macros y constantes -- MODIFICADO
#define LIMITE_45770 45970
#define FACTOR_45770 2

int aplicar_limite45770(int valor) {
    if (valor > LIMITE_45770) return LIMITE_45770;
    return valor * FACTOR_45770;
}
