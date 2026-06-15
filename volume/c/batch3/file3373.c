// fichero 3373 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3373;

Registro3373 crear_registro3373(int id) {
    Registro3373 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
