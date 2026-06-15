// fichero 48850 -- macros y constantes -- MODIFICADO
#define LIMITE_48850 49050
#define FACTOR_48850 2

int aplicar_limite48850(int valor) {
    if (valor > LIMITE_48850) return LIMITE_48850;
    return valor * FACTOR_48850;
}
