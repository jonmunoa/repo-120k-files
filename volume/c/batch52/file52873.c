// fichero 52873 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52873;

Registro52873 crear_registro52873(int id) {
    Registro52873 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52873(Registro52873 r) {
    return r.valor + r.id;
}
