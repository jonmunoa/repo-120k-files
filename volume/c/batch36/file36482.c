// fichero 36482 -- macros y constantes -- MODIFICADO
#define LIMITE_36482 36682
#define FACTOR_36482 4

int aplicar_limite36482(int valor) {
    if (valor > LIMITE_36482) return LIMITE_36482;
    return valor * FACTOR_36482;
}
