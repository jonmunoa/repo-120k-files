// fichero 47201 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47201;

Registro47201 crear_registro47201(int id) {
    Registro47201 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
