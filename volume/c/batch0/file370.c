// fichero 370 -- macros y constantes -- MODIFICADO
#define LIMITE_370 570
#define FACTOR_370 2

int aplicar_limite370(int valor) {
    if (valor > LIMITE_370) return LIMITE_370;
    return valor * FACTOR_370;
}
