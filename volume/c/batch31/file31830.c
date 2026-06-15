// fichero 31830 -- macros y constantes -- MODIFICADO
#define LIMITE_31830 32030
#define FACTOR_31830 2

int aplicar_limite31830(int valor) {
    if (valor > LIMITE_31830) return LIMITE_31830;
    return valor * FACTOR_31830;
}
