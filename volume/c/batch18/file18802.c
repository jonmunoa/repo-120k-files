// fichero 18802 -- macros y constantes -- MODIFICADO
#define LIMITE_18802 19002
#define FACTOR_18802 4

int aplicar_limite18802(int valor) {
    if (valor > LIMITE_18802) return LIMITE_18802;
    return valor * FACTOR_18802;
}
