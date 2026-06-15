// fichero 20370 -- macros y constantes -- MODIFICADO
#define LIMITE_20370 20570
#define FACTOR_20370 2

int aplicar_limite20370(int valor) {
    if (valor > LIMITE_20370) return LIMITE_20370;
    return valor * FACTOR_20370;
}
