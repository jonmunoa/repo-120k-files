// fichero 41621 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41621;

Registro41621 crear_registro41621(int id) {
    Registro41621 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
