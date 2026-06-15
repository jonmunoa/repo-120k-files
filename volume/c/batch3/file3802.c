// fichero 3802 -- macros y constantes -- MODIFICADO
#define LIMITE_3802 4002
#define FACTOR_3802 4

int aplicar_limite3802(int valor) {
    if (valor > LIMITE_3802) return LIMITE_3802;
    return valor * FACTOR_3802;
}
