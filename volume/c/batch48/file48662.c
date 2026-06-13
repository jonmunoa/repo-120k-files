// fichero 48662 -- macros y constantes
#define LIMITE_48662 48762
#define FACTOR_48662 3

int aplicar_limite48662(int valor) {
    if (valor > LIMITE_48662) return LIMITE_48662;
    return valor * FACTOR_48662;
}
