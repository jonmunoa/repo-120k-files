// fichero 40482 -- macros y constantes -- MODIFICADO
#define LIMITE_40482 40682
#define FACTOR_40482 4

int aplicar_limite40482(int valor) {
    if (valor > LIMITE_40482) return LIMITE_40482;
    return valor * FACTOR_40482;
}
