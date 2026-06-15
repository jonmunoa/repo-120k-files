// fichero 49806 -- macros y constantes -- MODIFICADO
#define LIMITE_49806 50006
#define FACTOR_49806 3

int aplicar_limite49806(int valor) {
    if (valor > LIMITE_49806) return LIMITE_49806;
    return valor * FACTOR_49806;
}
