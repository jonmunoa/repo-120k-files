// fichero 19138 -- macros y constantes -- MODIFICADO
#define LIMITE_19138 19338
#define FACTOR_19138 5

int aplicar_limite19138(int valor) {
    if (valor > LIMITE_19138) return LIMITE_19138;
    return valor * FACTOR_19138;
}
