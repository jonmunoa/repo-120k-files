// fichero 4149 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4149;

Registro4149 crear_registro4149(int id) {
    Registro4149 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
