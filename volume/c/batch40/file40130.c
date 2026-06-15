// fichero 40130 -- macros y constantes -- MODIFICADO
#define LIMITE_40130 40330
#define FACTOR_40130 2

int aplicar_limite40130(int valor) {
    if (valor > LIMITE_40130) return LIMITE_40130;
    return valor * FACTOR_40130;
}
