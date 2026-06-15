// fichero 41802 -- macros y constantes -- MODIFICADO
#define LIMITE_41802 42002
#define FACTOR_41802 4

int aplicar_limite41802(int valor) {
    if (valor > LIMITE_41802) return LIMITE_41802;
    return valor * FACTOR_41802;
}
