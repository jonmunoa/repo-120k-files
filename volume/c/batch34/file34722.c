// fichero 34722 -- macros y constantes -- MODIFICADO
#define LIMITE_34722 34922
#define FACTOR_34722 4

int aplicar_limite34722(int valor) {
    if (valor > LIMITE_34722) return LIMITE_34722;
    return valor * FACTOR_34722;
}
