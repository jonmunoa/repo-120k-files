// fichero 32206 -- macros y constantes -- MODIFICADO
#define LIMITE_32206 32406
#define FACTOR_32206 3

int aplicar_limite32206(int valor) {
    if (valor > LIMITE_32206) return LIMITE_32206;
    return valor * FACTOR_32206;
}
