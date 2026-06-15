// fichero 40558 -- macros y constantes -- MODIFICADO
#define LIMITE_40558 40758
#define FACTOR_40558 5

int aplicar_limite40558(int valor) {
    if (valor > LIMITE_40558) return LIMITE_40558;
    return valor * FACTOR_40558;
}
