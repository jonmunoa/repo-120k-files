// fichero 40193 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40193;

Registro40193 crear_registro40193(int id) {
    Registro40193 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
