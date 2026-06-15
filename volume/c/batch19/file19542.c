// fichero 19542 -- macros y constantes -- MODIFICADO
#define LIMITE_19542 19742
#define FACTOR_19542 4

int aplicar_limite19542(int valor) {
    if (valor > LIMITE_19542) return LIMITE_19542;
    return valor * FACTOR_19542;
}
