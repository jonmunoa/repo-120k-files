// fichero 18846 -- macros y constantes -- MODIFICADO
#define LIMITE_18846 19046
#define FACTOR_18846 3

int aplicar_limite18846(int valor) {
    if (valor > LIMITE_18846) return LIMITE_18846;
    return valor * FACTOR_18846;
}
