// fichero 54302 -- macros y constantes
#define LIMITE_54302 54402
#define FACTOR_54302 3

int aplicar_limite54302(int valor) {
    if (valor > LIMITE_54302) return LIMITE_54302;
    return valor * FACTOR_54302;
}
