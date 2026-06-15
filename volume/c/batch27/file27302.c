// fichero 27302 -- macros y constantes -- MODIFICADO
#define LIMITE_27302 27502
#define FACTOR_27302 4

int aplicar_limite27302(int valor) {
    if (valor > LIMITE_27302) return LIMITE_27302;
    return valor * FACTOR_27302;
}
