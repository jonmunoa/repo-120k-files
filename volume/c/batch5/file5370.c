// fichero 5370 -- macros y constantes -- MODIFICADO
#define LIMITE_5370 5570
#define FACTOR_5370 2

int aplicar_limite5370(int valor) {
    if (valor > LIMITE_5370) return LIMITE_5370;
    return valor * FACTOR_5370;
}
