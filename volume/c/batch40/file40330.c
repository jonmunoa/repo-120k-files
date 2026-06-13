// fichero 40330 -- macros y constantes
#define LIMITE_40330 40430
#define FACTOR_40330 1

int aplicar_limite40330(int valor) {
    if (valor > LIMITE_40330) return LIMITE_40330;
    return valor * FACTOR_40330;
}
