// fichero 23482 -- macros y constantes -- MODIFICADO
#define LIMITE_23482 23682
#define FACTOR_23482 4

int aplicar_limite23482(int valor) {
    if (valor > LIMITE_23482) return LIMITE_23482;
    return valor * FACTOR_23482;
}
