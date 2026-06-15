// fichero 19738 -- macros y constantes -- MODIFICADO
#define LIMITE_19738 19938
#define FACTOR_19738 5

int aplicar_limite19738(int valor) {
    if (valor > LIMITE_19738) return LIMITE_19738;
    return valor * FACTOR_19738;
}
