// fichero 10949 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10949;

Registro10949 crear_registro10949(int id) {
    Registro10949 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10949(Registro10949 r) {
    return r.valor + r.id;
}
