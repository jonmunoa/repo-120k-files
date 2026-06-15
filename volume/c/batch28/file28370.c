// fichero 28370 -- macros y constantes -- MODIFICADO
#define LIMITE_28370 28570
#define FACTOR_28370 2

int aplicar_limite28370(int valor) {
    if (valor > LIMITE_28370) return LIMITE_28370;
    return valor * FACTOR_28370;
}
