// fichero 42802 -- macros y constantes -- MODIFICADO
#define LIMITE_42802 43002
#define FACTOR_42802 4

int aplicar_limite42802(int valor) {
    if (valor > LIMITE_42802) return LIMITE_42802;
    return valor * FACTOR_42802;
}
