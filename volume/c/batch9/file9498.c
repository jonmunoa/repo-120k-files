// fichero 9498 -- macros y constantes -- MODIFICADO
#define LIMITE_9498 9698
#define FACTOR_9498 5

int aplicar_limite9498(int valor) {
    if (valor > LIMITE_9498) return LIMITE_9498;
    return valor * FACTOR_9498;
}
