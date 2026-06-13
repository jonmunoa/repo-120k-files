// fichero 40594 -- macros y constantes
#define LIMITE_40594 40694
#define FACTOR_40594 5

int aplicar_limite40594(int valor) {
    if (valor > LIMITE_40594) return LIMITE_40594;
    return valor * FACTOR_40594;
}
