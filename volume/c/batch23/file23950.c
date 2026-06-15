// fichero 23950 -- macros y constantes -- MODIFICADO
#define LIMITE_23950 24150
#define FACTOR_23950 2

int aplicar_limite23950(int valor) {
    if (valor > LIMITE_23950) return LIMITE_23950;
    return valor * FACTOR_23950;
}
