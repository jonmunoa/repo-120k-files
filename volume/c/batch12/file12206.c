// fichero 12206 -- macros y constantes -- MODIFICADO
#define LIMITE_12206 12406
#define FACTOR_12206 3

int aplicar_limite12206(int valor) {
    if (valor > LIMITE_12206) return LIMITE_12206;
    return valor * FACTOR_12206;
}
