// fichero 40722 -- macros y constantes -- MODIFICADO
#define LIMITE_40722 40922
#define FACTOR_40722 4

int aplicar_limite40722(int valor) {
    if (valor > LIMITE_40722) return LIMITE_40722;
    return valor * FACTOR_40722;
}
