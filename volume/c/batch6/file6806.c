// fichero 6806 -- macros y constantes -- MODIFICADO
#define LIMITE_6806 7006
#define FACTOR_6806 3

int aplicar_limite6806(int valor) {
    if (valor > LIMITE_6806) return LIMITE_6806;
    return valor * FACTOR_6806;
}
