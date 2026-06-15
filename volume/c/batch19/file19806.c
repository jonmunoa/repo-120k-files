// fichero 19806 -- macros y constantes -- MODIFICADO
#define LIMITE_19806 20006
#define FACTOR_19806 3

int aplicar_limite19806(int valor) {
    if (valor > LIMITE_19806) return LIMITE_19806;
    return valor * FACTOR_19806;
}
