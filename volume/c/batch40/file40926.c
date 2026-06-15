// fichero 40926 -- macros y constantes -- MODIFICADO
#define LIMITE_40926 41126
#define FACTOR_40926 3

int aplicar_limite40926(int valor) {
    if (valor > LIMITE_40926) return LIMITE_40926;
    return valor * FACTOR_40926;
}
