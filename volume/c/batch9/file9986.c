// fichero 9986 -- macros y constantes
#define LIMITE_9986 10086
#define FACTOR_9986 2

int aplicar_limite9986(int valor) {
    if (valor > LIMITE_9986) return LIMITE_9986;
    return valor * FACTOR_9986;
}
