// fichero 34918 -- macros y constantes
#define LIMITE_34918 35018
#define FACTOR_34918 4

int aplicar_limite34918(int valor) {
    if (valor > LIMITE_34918) return LIMITE_34918;
    return valor * FACTOR_34918;
}
