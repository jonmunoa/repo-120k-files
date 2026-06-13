// fichero 40230 -- macros y constantes
#define LIMITE_40230 40330
#define FACTOR_40230 1

int aplicar_limite40230(int valor) {
    if (valor > LIMITE_40230) return LIMITE_40230;
    return valor * FACTOR_40230;
}
