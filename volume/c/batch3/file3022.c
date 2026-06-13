// fichero 3022 -- macros y constantes
#define LIMITE_3022 3122
#define FACTOR_3022 3

int aplicar_limite3022(int valor) {
    if (valor > LIMITE_3022) return LIMITE_3022;
    return valor * FACTOR_3022;
}
