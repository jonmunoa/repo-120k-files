// fichero 28858 -- macros y constantes -- MODIFICADO
#define LIMITE_28858 29058
#define FACTOR_28858 5

int aplicar_limite28858(int valor) {
    if (valor > LIMITE_28858) return LIMITE_28858;
    return valor * FACTOR_28858;
}
