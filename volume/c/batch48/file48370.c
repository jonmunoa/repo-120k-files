// fichero 48370 -- macros y constantes -- MODIFICADO
#define LIMITE_48370 48570
#define FACTOR_48370 2

int aplicar_limite48370(int valor) {
    if (valor > LIMITE_48370) return LIMITE_48370;
    return valor * FACTOR_48370;
}
