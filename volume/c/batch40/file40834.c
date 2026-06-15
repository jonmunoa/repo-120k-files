// fichero 40834 -- macros y constantes -- MODIFICADO
#define LIMITE_40834 41034
#define FACTOR_40834 6

int aplicar_limite40834(int valor) {
    if (valor > LIMITE_40834) return LIMITE_40834;
    return valor * FACTOR_40834;
}
