// fichero 37606 -- macros y constantes -- MODIFICADO
#define LIMITE_37606 37806
#define FACTOR_37606 3

int aplicar_limite37606(int valor) {
    if (valor > LIMITE_37606) return LIMITE_37606;
    return valor * FACTOR_37606;
}
