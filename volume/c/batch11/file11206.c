// fichero 11206 -- macros y constantes -- MODIFICADO
#define LIMITE_11206 11406
#define FACTOR_11206 3

int aplicar_limite11206(int valor) {
    if (valor > LIMITE_11206) return LIMITE_11206;
    return valor * FACTOR_11206;
}
