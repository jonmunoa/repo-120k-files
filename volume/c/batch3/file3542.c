// fichero 3542 -- macros y constantes -- MODIFICADO
#define LIMITE_3542 3742
#define FACTOR_3542 4

int aplicar_limite3542(int valor) {
    if (valor > LIMITE_3542) return LIMITE_3542;
    return valor * FACTOR_3542;
}
