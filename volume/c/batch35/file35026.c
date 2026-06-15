// fichero 35026 -- macros y constantes -- MODIFICADO
#define LIMITE_35026 35226
#define FACTOR_35026 3

int aplicar_limite35026(int valor) {
    if (valor > LIMITE_35026) return LIMITE_35026;
    return valor * FACTOR_35026;
}
