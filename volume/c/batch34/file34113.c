// fichero 34113 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34113;

Registro34113 crear_registro34113(int id) {
    Registro34113 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
