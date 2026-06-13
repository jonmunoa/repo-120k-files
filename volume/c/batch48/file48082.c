// fichero 48082 -- macros y constantes
#define LIMITE_48082 48182
#define FACTOR_48082 3

int aplicar_limite48082(int valor) {
    if (valor > LIMITE_48082) return LIMITE_48082;
    return valor * FACTOR_48082;
}
