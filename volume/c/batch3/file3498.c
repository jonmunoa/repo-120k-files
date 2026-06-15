// fichero 3498 -- macros y constantes -- MODIFICADO
#define LIMITE_3498 3698
#define FACTOR_3498 5

int aplicar_limite3498(int valor) {
    if (valor > LIMITE_3498) return LIMITE_3498;
    return valor * FACTOR_3498;
}
