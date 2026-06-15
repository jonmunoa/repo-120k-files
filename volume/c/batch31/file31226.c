// fichero 31226 -- macros y constantes -- MODIFICADO
#define LIMITE_31226 31426
#define FACTOR_31226 3

int aplicar_limite31226(int valor) {
    if (valor > LIMITE_31226) return LIMITE_31226;
    return valor * FACTOR_31226;
}
