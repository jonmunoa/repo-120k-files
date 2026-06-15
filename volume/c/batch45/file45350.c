// fichero 45350 -- macros y constantes -- MODIFICADO
#define LIMITE_45350 45550
#define FACTOR_45350 2

int aplicar_limite45350(int valor) {
    if (valor > LIMITE_45350) return LIMITE_45350;
    return valor * FACTOR_45350;
}
