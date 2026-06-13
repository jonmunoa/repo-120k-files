// fichero 23905 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23905;

Registro23905 crear_registro23905(int id) {
    Registro23905 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23905(Registro23905 r) {
    return r.valor + r.id;
}
