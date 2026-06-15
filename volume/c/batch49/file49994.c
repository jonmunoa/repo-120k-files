// fichero 49994 -- macros y constantes -- MODIFICADO
#define LIMITE_49994 50194
#define FACTOR_49994 6

int aplicar_limite49994(int valor) {
    if (valor > LIMITE_49994) return LIMITE_49994;
    return valor * FACTOR_49994;
}
