// fichero 39930 -- macros y constantes -- MODIFICADO
#define LIMITE_39930 40130
#define FACTOR_39930 2

int aplicar_limite39930(int valor) {
    if (valor > LIMITE_39930) return LIMITE_39930;
    return valor * FACTOR_39930;
}
