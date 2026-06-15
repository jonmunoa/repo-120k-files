// fichero 20789 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20789;

Registro20789 crear_registro20789(int id) {
    Registro20789 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
