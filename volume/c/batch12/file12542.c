// fichero 12542 -- macros y constantes -- MODIFICADO
#define LIMITE_12542 12742
#define FACTOR_12542 4

int aplicar_limite12542(int valor) {
    if (valor > LIMITE_12542) return LIMITE_12542;
    return valor * FACTOR_12542;
}
