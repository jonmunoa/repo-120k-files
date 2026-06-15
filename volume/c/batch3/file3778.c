// fichero 3778 -- macros y constantes -- MODIFICADO
#define LIMITE_3778 3978
#define FACTOR_3778 5

int aplicar_limite3778(int valor) {
    if (valor > LIMITE_3778) return LIMITE_3778;
    return valor * FACTOR_3778;
}
