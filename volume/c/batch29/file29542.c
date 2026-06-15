// fichero 29542 -- macros y constantes -- MODIFICADO
#define LIMITE_29542 29742
#define FACTOR_29542 4

int aplicar_limite29542(int valor) {
    if (valor > LIMITE_29542) return LIMITE_29542;
    return valor * FACTOR_29542;
}
