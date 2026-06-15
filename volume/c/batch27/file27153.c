// fichero 27153 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27153;

Registro27153 crear_registro27153(int id) {
    Registro27153 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
