// fichero 27802 -- macros y constantes -- MODIFICADO
#define LIMITE_27802 28002
#define FACTOR_27802 4

int aplicar_limite27802(int valor) {
    if (valor > LIMITE_27802) return LIMITE_27802;
    return valor * FACTOR_27802;
}
