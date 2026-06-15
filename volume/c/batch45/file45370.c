// fichero 45370 -- macros y constantes -- MODIFICADO
#define LIMITE_45370 45570
#define FACTOR_45370 2

int aplicar_limite45370(int valor) {
    if (valor > LIMITE_45370) return LIMITE_45370;
    return valor * FACTOR_45370;
}
