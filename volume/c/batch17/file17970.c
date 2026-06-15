// fichero 17970 -- macros y constantes -- MODIFICADO
#define LIMITE_17970 18170
#define FACTOR_17970 2

int aplicar_limite17970(int valor) {
    if (valor > LIMITE_17970) return LIMITE_17970;
    return valor * FACTOR_17970;
}
