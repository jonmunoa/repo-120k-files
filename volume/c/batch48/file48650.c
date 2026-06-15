// fichero 48650 -- macros y constantes -- MODIFICADO
#define LIMITE_48650 48850
#define FACTOR_48650 2

int aplicar_limite48650(int valor) {
    if (valor > LIMITE_48650) return LIMITE_48650;
    return valor * FACTOR_48650;
}
