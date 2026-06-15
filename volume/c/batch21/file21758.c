// fichero 21758 -- macros y constantes -- MODIFICADO
#define LIMITE_21758 21958
#define FACTOR_21758 5

int aplicar_limite21758(int valor) {
    if (valor > LIMITE_21758) return LIMITE_21758;
    return valor * FACTOR_21758;
}
