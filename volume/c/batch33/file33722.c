// fichero 33722 -- macros y constantes -- MODIFICADO
#define LIMITE_33722 33922
#define FACTOR_33722 4

int aplicar_limite33722(int valor) {
    if (valor > LIMITE_33722) return LIMITE_33722;
    return valor * FACTOR_33722;
}
