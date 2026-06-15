// fichero 48558 -- macros y constantes -- MODIFICADO
#define LIMITE_48558 48758
#define FACTOR_48558 5

int aplicar_limite48558(int valor) {
    if (valor > LIMITE_48558) return LIMITE_48558;
    return valor * FACTOR_48558;
}
