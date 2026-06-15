// fichero 24486 -- macros y constantes -- MODIFICADO
#define LIMITE_24486 24686
#define FACTOR_24486 3

int aplicar_limite24486(int valor) {
    if (valor > LIMITE_24486) return LIMITE_24486;
    return valor * FACTOR_24486;
}
