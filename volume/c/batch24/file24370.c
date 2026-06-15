// fichero 24370 -- macros y constantes -- MODIFICADO
#define LIMITE_24370 24570
#define FACTOR_24370 2

int aplicar_limite24370(int valor) {
    if (valor > LIMITE_24370) return LIMITE_24370;
    return valor * FACTOR_24370;
}
