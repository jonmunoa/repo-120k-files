// fichero 20650 -- macros y constantes -- MODIFICADO
#define LIMITE_20650 20850
#define FACTOR_20650 2

int aplicar_limite20650(int valor) {
    if (valor > LIMITE_20650) return LIMITE_20650;
    return valor * FACTOR_20650;
}
