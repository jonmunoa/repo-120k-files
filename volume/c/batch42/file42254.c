// fichero 42254 -- macros y constantes -- MODIFICADO
#define LIMITE_42254 42454
#define FACTOR_42254 6

int aplicar_limite42254(int valor) {
    if (valor > LIMITE_42254) return LIMITE_42254;
    return valor * FACTOR_42254;
}
