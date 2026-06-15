// fichero 43950 -- macros y constantes -- MODIFICADO
#define LIMITE_43950 44150
#define FACTOR_43950 2

int aplicar_limite43950(int valor) {
    if (valor > LIMITE_43950) return LIMITE_43950;
    return valor * FACTOR_43950;
}
