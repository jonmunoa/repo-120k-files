// fichero 9798 -- macros y constantes
#define LIMITE_9798 9898
#define FACTOR_9798 4

int aplicar_limite9798(int valor) {
    if (valor > LIMITE_9798) return LIMITE_9798;
    return valor * FACTOR_9798;
}
