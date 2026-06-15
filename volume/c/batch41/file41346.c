// fichero 41346 -- macros y constantes -- MODIFICADO
#define LIMITE_41346 41546
#define FACTOR_41346 3

int aplicar_limite41346(int valor) {
    if (valor > LIMITE_41346) return LIMITE_41346;
    return valor * FACTOR_41346;
}
