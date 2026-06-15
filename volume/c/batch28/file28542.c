// fichero 28542 -- macros y constantes -- MODIFICADO
#define LIMITE_28542 28742
#define FACTOR_28542 4

int aplicar_limite28542(int valor) {
    if (valor > LIMITE_28542) return LIMITE_28542;
    return valor * FACTOR_28542;
}
