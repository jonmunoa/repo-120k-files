// fichero 27962 -- macros y constantes -- MODIFICADO
#define LIMITE_27962 28162
#define FACTOR_27962 4

int aplicar_limite27962(int valor) {
    if (valor > LIMITE_27962) return LIMITE_27962;
    return valor * FACTOR_27962;
}
