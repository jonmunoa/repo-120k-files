// fichero 42378 -- macros y constantes -- MODIFICADO
#define LIMITE_42378 42578
#define FACTOR_42378 5

int aplicar_limite42378(int valor) {
    if (valor > LIMITE_42378) return LIMITE_42378;
    return valor * FACTOR_42378;
}
