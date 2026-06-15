// fichero 37370 -- macros y constantes -- MODIFICADO
#define LIMITE_37370 37570
#define FACTOR_37370 2

int aplicar_limite37370(int valor) {
    if (valor > LIMITE_37370) return LIMITE_37370;
    return valor * FACTOR_37370;
}
