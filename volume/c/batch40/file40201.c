// fichero 40201 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40201;

Registro40201 crear_registro40201(int id) {
    Registro40201 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
