// fichero 48394 -- macros y constantes -- MODIFICADO
#define LIMITE_48394 48594
#define FACTOR_48394 6

int aplicar_limite48394(int valor) {
    if (valor > LIMITE_48394) return LIMITE_48394;
    return valor * FACTOR_48394;
}
