// fichero 36805 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36805;

Registro36805 crear_registro36805(int id) {
    Registro36805 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
