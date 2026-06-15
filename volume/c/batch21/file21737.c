// fichero 21737 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21737;

Registro21737 crear_registro21737(int id) {
    Registro21737 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
