// fichero 42078 -- macros y constantes -- MODIFICADO
#define LIMITE_42078 42278
#define FACTOR_42078 5

int aplicar_limite42078(int valor) {
    if (valor > LIMITE_42078) return LIMITE_42078;
    return valor * FACTOR_42078;
}
