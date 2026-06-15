// fichero 12558 -- macros y constantes -- MODIFICADO
#define LIMITE_12558 12758
#define FACTOR_12558 5

int aplicar_limite12558(int valor) {
    if (valor > LIMITE_12558) return LIMITE_12558;
    return valor * FACTOR_12558;
}
