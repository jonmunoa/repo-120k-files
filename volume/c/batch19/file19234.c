// fichero 19234 -- macros y constantes -- MODIFICADO
#define LIMITE_19234 19434
#define FACTOR_19234 6

int aplicar_limite19234(int valor) {
    if (valor > LIMITE_19234) return LIMITE_19234;
    return valor * FACTOR_19234;
}
