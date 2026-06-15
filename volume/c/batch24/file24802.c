// fichero 24802 -- macros y constantes -- MODIFICADO
#define LIMITE_24802 25002
#define FACTOR_24802 4

int aplicar_limite24802(int valor) {
    if (valor > LIMITE_24802) return LIMITE_24802;
    return valor * FACTOR_24802;
}
