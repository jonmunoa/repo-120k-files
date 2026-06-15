// fichero 9986 -- macros y constantes -- MODIFICADO
#define LIMITE_9986 10186
#define FACTOR_9986 3

int aplicar_limite9986(int valor) {
    if (valor > LIMITE_9986) return LIMITE_9986;
    return valor * FACTOR_9986;
}
