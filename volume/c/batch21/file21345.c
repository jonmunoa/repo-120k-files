// fichero 21345 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21345;

Registro21345 crear_registro21345(int id) {
    Registro21345 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
