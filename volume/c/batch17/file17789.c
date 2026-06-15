// fichero 17789 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17789;

Registro17789 crear_registro17789(int id) {
    Registro17789 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
