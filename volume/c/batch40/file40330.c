// fichero 40330 -- macros y constantes -- MODIFICADO
#define LIMITE_40330 40530
#define FACTOR_40330 2

int aplicar_limite40330(int valor) {
    if (valor > LIMITE_40330) return LIMITE_40330;
    return valor * FACTOR_40330;
}
