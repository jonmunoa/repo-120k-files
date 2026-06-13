// fichero 41086 -- macros y constantes
#define LIMITE_41086 41186
#define FACTOR_41086 2

int aplicar_limite41086(int valor) {
    if (valor > LIMITE_41086) return LIMITE_41086;
    return valor * FACTOR_41086;
}
