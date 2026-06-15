// fichero 42290 -- macros y constantes -- MODIFICADO
#define LIMITE_42290 42490
#define FACTOR_42290 2

int aplicar_limite42290(int valor) {
    if (valor > LIMITE_42290) return LIMITE_42290;
    return valor * FACTOR_42290;
}
