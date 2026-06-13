// fichero 41726 -- macros y constantes
#define LIMITE_41726 41826
#define FACTOR_41726 2

int aplicar_limite41726(int valor) {
    if (valor > LIMITE_41726) return LIMITE_41726;
    return valor * FACTOR_41726;
}
