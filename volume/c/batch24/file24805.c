// fichero 24805 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24805;

Registro24805 crear_registro24805(int id) {
    Registro24805 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
