// fichero 25918 -- macros y constantes -- MODIFICADO
#define LIMITE_25918 26118
#define FACTOR_25918 5

int aplicar_limite25918(int valor) {
    if (valor > LIMITE_25918) return LIMITE_25918;
    return valor * FACTOR_25918;
}
