// fichero 30682 -- macros y constantes -- MODIFICADO
#define LIMITE_30682 30882
#define FACTOR_30682 4

int aplicar_limite30682(int valor) {
    if (valor > LIMITE_30682) return LIMITE_30682;
    return valor * FACTOR_30682;
}
