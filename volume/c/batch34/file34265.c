// fichero 34265 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34265;

Registro34265 crear_registro34265(int id) {
    Registro34265 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
