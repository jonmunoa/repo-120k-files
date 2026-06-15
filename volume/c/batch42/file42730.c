// fichero 42730 -- macros y constantes -- MODIFICADO
#define LIMITE_42730 42930
#define FACTOR_42730 2

int aplicar_limite42730(int valor) {
    if (valor > LIMITE_42730) return LIMITE_42730;
    return valor * FACTOR_42730;
}
