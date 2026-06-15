// fichero 38442 -- macros y constantes -- MODIFICADO
#define LIMITE_38442 38642
#define FACTOR_38442 4

int aplicar_limite38442(int valor) {
    if (valor > LIMITE_38442) return LIMITE_38442;
    return valor * FACTOR_38442;
}
