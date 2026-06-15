// fichero 38149 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38149;

Registro38149 crear_registro38149(int id) {
    Registro38149 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
