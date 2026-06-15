// fichero 6370 -- macros y constantes -- MODIFICADO
#define LIMITE_6370 6570
#define FACTOR_6370 2

int aplicar_limite6370(int valor) {
    if (valor > LIMITE_6370) return LIMITE_6370;
    return valor * FACTOR_6370;
}
