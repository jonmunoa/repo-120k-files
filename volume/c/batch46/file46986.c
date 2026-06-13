// fichero 46986 -- macros y constantes
#define LIMITE_46986 47086
#define FACTOR_46986 2

int aplicar_limite46986(int valor) {
    if (valor > LIMITE_46986) return LIMITE_46986;
    return valor * FACTOR_46986;
}
