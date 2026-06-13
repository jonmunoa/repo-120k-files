// fichero 24918 -- macros y constantes
#define LIMITE_24918 25018
#define FACTOR_24918 4

int aplicar_limite24918(int valor) {
    if (valor > LIMITE_24918) return LIMITE_24918;
    return valor * FACTOR_24918;
}
