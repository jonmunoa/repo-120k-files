// fichero 39370 -- macros y constantes -- MODIFICADO
#define LIMITE_39370 39570
#define FACTOR_39370 2

int aplicar_limite39370(int valor) {
    if (valor > LIMITE_39370) return LIMITE_39370;
    return valor * FACTOR_39370;
}
