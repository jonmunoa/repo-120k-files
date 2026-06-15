// fichero 25802 -- macros y constantes -- MODIFICADO
#define LIMITE_25802 26002
#define FACTOR_25802 4

int aplicar_limite25802(int valor) {
    if (valor > LIMITE_25802) return LIMITE_25802;
    return valor * FACTOR_25802;
}
