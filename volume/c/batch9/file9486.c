// fichero 9486 -- macros y constantes -- MODIFICADO
#define LIMITE_9486 9686
#define FACTOR_9486 3

int aplicar_limite9486(int valor) {
    if (valor > LIMITE_9486) return LIMITE_9486;
    return valor * FACTOR_9486;
}
