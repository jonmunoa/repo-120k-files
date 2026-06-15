// fichero 20193 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20193;

Registro20193 crear_registro20193(int id) {
    Registro20193 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
