// fichero 40926 -- macros y constantes
#define LIMITE_40926 41026
#define FACTOR_40926 2

int aplicar_limite40926(int valor) {
    if (valor > LIMITE_40926) return LIMITE_40926;
    return valor * FACTOR_40926;
}
