// fichero 21149 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21149;

Registro21149 crear_registro21149(int id) {
    Registro21149 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
