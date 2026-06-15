// fichero 30370 -- macros y constantes -- MODIFICADO
#define LIMITE_30370 30570
#define FACTOR_30370 2

int aplicar_limite30370(int valor) {
    if (valor > LIMITE_30370) return LIMITE_30370;
    return valor * FACTOR_30370;
}
