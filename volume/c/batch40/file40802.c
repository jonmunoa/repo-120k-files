// fichero 40802 -- macros y constantes -- MODIFICADO
#define LIMITE_40802 41002
#define FACTOR_40802 4

int aplicar_limite40802(int valor) {
    if (valor > LIMITE_40802) return LIMITE_40802;
    return valor * FACTOR_40802;
}
