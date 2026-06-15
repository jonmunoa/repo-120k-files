// fichero 41137 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41137;

Registro41137 crear_registro41137(int id) {
    Registro41137 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
