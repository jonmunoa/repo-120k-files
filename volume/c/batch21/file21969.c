// fichero 21969 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21969;

Registro21969 crear_registro21969(int id) {
    Registro21969 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
