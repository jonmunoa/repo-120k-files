// fichero 7137 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7137;

Registro7137 crear_registro7137(int id) {
    Registro7137 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
