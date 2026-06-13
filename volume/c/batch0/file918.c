// fichero 918 -- macros y constantes
#define LIMITE_918 1018
#define FACTOR_918 4

int aplicar_limite918(int valor) {
    if (valor > LIMITE_918) return LIMITE_918;
    return valor * FACTOR_918;
}
