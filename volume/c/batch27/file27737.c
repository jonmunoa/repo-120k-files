// fichero 27737 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27737;

Registro27737 crear_registro27737(int id) {
    Registro27737 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
