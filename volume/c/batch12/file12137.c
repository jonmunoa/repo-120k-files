// fichero 12137 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12137;

Registro12137 crear_registro12137(int id) {
    Registro12137 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12137(Registro12137 r) {
    return r.valor + r.id;
}
