// fichero 37482 -- macros y constantes -- MODIFICADO
#define LIMITE_37482 37682
#define FACTOR_37482 4

int aplicar_limite37482(int valor) {
    if (valor > LIMITE_37482) return LIMITE_37482;
    return valor * FACTOR_37482;
}
