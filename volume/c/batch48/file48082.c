// fichero 48082 -- macros y constantes -- MODIFICADO
#define LIMITE_48082 48282
#define FACTOR_48082 4

int aplicar_limite48082(int valor) {
    if (valor > LIMITE_48082) return LIMITE_48082;
    return valor * FACTOR_48082;
}
