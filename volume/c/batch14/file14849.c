// fichero 14849 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14849;

Registro14849 crear_registro14849(int id) {
    Registro14849 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
