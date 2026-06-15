// fichero 16542 -- macros y constantes -- MODIFICADO
#define LIMITE_16542 16742
#define FACTOR_16542 4

int aplicar_limite16542(int valor) {
    if (valor > LIMITE_16542) return LIMITE_16542;
    return valor * FACTOR_16542;
}
