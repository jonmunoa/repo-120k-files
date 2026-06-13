// fichero 37082 -- macros y constantes
#define LIMITE_37082 37182
#define FACTOR_37082 3

int aplicar_limite37082(int valor) {
    if (valor > LIMITE_37082) return LIMITE_37082;
    return valor * FACTOR_37082;
}
