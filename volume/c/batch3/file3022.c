// fichero 3022 -- macros y constantes -- MODIFICADO
#define LIMITE_3022 3222
#define FACTOR_3022 4

int aplicar_limite3022(int valor) {
    if (valor > LIMITE_3022) return LIMITE_3022;
    return valor * FACTOR_3022;
}
