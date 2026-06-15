// fichero 5542 -- macros y constantes -- MODIFICADO
#define LIMITE_5542 5742
#define FACTOR_5542 4

int aplicar_limite5542(int valor) {
    if (valor > LIMITE_5542) return LIMITE_5542;
    return valor * FACTOR_5542;
}
