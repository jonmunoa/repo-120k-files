// fichero 27137 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27137;

Registro27137 crear_registro27137(int id) {
    Registro27137 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
