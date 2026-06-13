// fichero 44726 -- macros y constantes
#define LIMITE_44726 44826
#define FACTOR_44726 2

int aplicar_limite44726(int valor) {
    if (valor > LIMITE_44726) return LIMITE_44726;
    return valor * FACTOR_44726;
}
