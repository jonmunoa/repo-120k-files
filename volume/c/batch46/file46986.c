// fichero 46986 -- macros y constantes -- MODIFICADO
#define LIMITE_46986 47186
#define FACTOR_46986 3

int aplicar_limite46986(int valor) {
    if (valor > LIMITE_46986) return LIMITE_46986;
    return valor * FACTOR_46986;
}
