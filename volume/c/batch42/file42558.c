// fichero 42558 -- macros y constantes -- MODIFICADO
#define LIMITE_42558 42758
#define FACTOR_42558 5

int aplicar_limite42558(int valor) {
    if (valor > LIMITE_42558) return LIMITE_42558;
    return valor * FACTOR_42558;
}
