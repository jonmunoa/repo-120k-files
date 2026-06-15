// fichero 9798 -- macros y constantes -- MODIFICADO
#define LIMITE_9798 9998
#define FACTOR_9798 5

int aplicar_limite9798(int valor) {
    if (valor > LIMITE_9798) return LIMITE_9798;
    return valor * FACTOR_9798;
}
