// fichero 6938 -- macros y constantes -- MODIFICADO
#define LIMITE_6938 7138
#define FACTOR_6938 5

int aplicar_limite6938(int valor) {
    if (valor > LIMITE_6938) return LIMITE_6938;
    return valor * FACTOR_6938;
}
