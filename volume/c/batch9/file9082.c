// fichero 9082 -- macros y constantes -- MODIFICADO
#define LIMITE_9082 9282
#define FACTOR_9082 4

int aplicar_limite9082(int valor) {
    if (valor > LIMITE_9082) return LIMITE_9082;
    return valor * FACTOR_9082;
}
