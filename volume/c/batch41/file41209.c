// fichero 41209 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41209;

Registro41209 crear_registro41209(int id) {
    Registro41209 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
