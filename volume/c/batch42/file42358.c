// fichero 42358 -- macros y constantes -- MODIFICADO
#define LIMITE_42358 42558
#define FACTOR_42358 5

int aplicar_limite42358(int valor) {
    if (valor > LIMITE_42358) return LIMITE_42358;
    return valor * FACTOR_42358;
}
