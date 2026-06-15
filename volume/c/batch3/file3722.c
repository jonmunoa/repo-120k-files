// fichero 3722 -- macros y constantes -- MODIFICADO
#define LIMITE_3722 3922
#define FACTOR_3722 4

int aplicar_limite3722(int valor) {
    if (valor > LIMITE_3722) return LIMITE_3722;
    return valor * FACTOR_3722;
}
